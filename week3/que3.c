#include <stdio.h>

int main() {
    int arr[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j){
            scanf("%d", &arr[i][j]); // �迭�� scanf
        }
    }
    printf("[���� ��]\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%4d", arr[i][j]); // scanf�� �迭�� �״�� �����
        }
        printf("\n");
    }
    printf("\n[���� ��]\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%4d", arr[j][i]); // ��� ���� �ݴ�� �����
        }
        printf("\n");
    }
    return 0;
}