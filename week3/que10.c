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
        { 70, 45, 100, 92, 150, 81, 90 },
        { 88, 92, 77, 30, 52, 55, 66 },
        { 50, 90, 88, 75, 77, 49, 72 },
        { 120, 92, 80, 150, 130, 105, 113 }
    };
    char *name[4] = {"관악점", "강남점", "명동점", "대림점"};

    char *name_p[4];
    int *arr_p[4];
    char *t1;
    int *t2;
    int avarr[4];

    printf("> 실적별 출력...\n");
    for (int i = 0; i < 4; ++i) {
        avarr[i] = aver(arr[i], 7);
        name_p[i] = name[i];
        arr_p[i] = arr[i];
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (avarr[i] < avarr[j]) {
                t1 = name_p[i];
                name_p[i] = name_p[j];
                name_p[j] = t1;

                t2 = arr_p[i];
                arr_p[i] = arr_p[j];
                arr_p[j] = t2;
            }
        }
    }
    for (int i = 0; i < 4; ++i) {
        printf("%s", name_p[i]);
        for (int j = 0; j < 7; ++j) {
            printf("%4d", arr_p[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("> 지점별 출력...\n");
    for (int i = 0; i < 4; ++i) {
        printf("%s", name[i]);
        for (int j = 0; j < 7; ++j) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    } 
    return 0;
}