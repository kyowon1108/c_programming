#include <stdio.h>

int main() {
    int a[3][3], b[3][3], r[3][3];
    printf("[ 행렬 A ]\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j){
            scanf("%d", &a[i][j]);
        }
    }
    printf("[ 행렬 B ]\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j){
            scanf("%d", &b[i][j]);
        }
    }

    printf("[ 행렬 A ]\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    printf("[ 행렬 B ]\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
    printf("[ 행렬 곱 ]\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int res = 0;
            for (int k = 0; k < 3; ++k) {
                res += a[i][k] * b[k][j];
            }
            printf("%4d", res);
        }
        printf("\n");
    }
    return 0;
}