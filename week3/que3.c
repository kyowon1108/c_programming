#include <stdio.h>

int main() {
    int arr[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("[���� ��]\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n[���� ��]\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%4d", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}