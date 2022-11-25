#include <stdio.h>
#include <math.h>

double aver(int *ar, int len) {
    double sum = 0;
    for (int i = 0; i < len; ++i) {
        sum += *ar++;
    }
    return round(sum / len);
}


int main() {
    int arr[4][7] = {
        { 70, 45, 100, 92, 150, 81 },
        { 88, 92, 77, 30, 52, 55 },
        { 50, 90, 88, 75, 77, 49 },
        { 120, 92, 80, 150, 130, 105 }
    };
    char *name[4] = {"������", "������", "����", "�븲��"};

    char *name_p[4];
    int *arr_p[4];
    char *t1;
    int *t2;
    int avarr[4];

    for (int i = 0; i < 4; ++i) {
        arr[i][6] = aver(arr[i], 6); // arr�� 6�� �ε����� arr�� i��° ���� ����� �������
        name_p[i] = name[i];
        arr_p[i] = arr[i];
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (arr[i][6] < arr[j][6]) { // ����� ���� sort�ϴ� ������
                t1 = name_p[i];
                name_p[i] = name_p[j];
                name_p[j] = t1;

                t2 = arr_p[i];
                arr_p[i] = arr_p[j];
                arr_p[j] = t2;
            }
        }
    }

    printf("> ������ ���...\n");
    for (int i = 0; i < 4; ++i) {
        printf("%s", name_p[i]);
        for (int j = 0; j < 7; ++j) {
            printf("%4d", arr_p[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("> ������ ���...\n");
    for (int i = 0; i < 4; ++i) {
        printf("%s", name[i]);
        for (int j = 0; j < 7; ++j) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    } 
    return 0;
}