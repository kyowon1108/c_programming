#include <stdio.h>

void add_matrix(int (*x)[3], int (*y)[3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%5d", x[i][j] + y[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int x[3][3] = { { 10, 20, 30 }, { 40, 50, 60 }, { 70, 80, 90 } };
    int y[3][3] = { { 9, 8, 7 }, { 6, 5, 4 }, { 3, 2, 1 } };
    printf("x ���:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%5d", x[i][j]);
        }
        printf("\n");
    }
    printf("y ���:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%5d", y[i][j]);
        }
        printf("\n");
    }
    printf("x+y ���:\n");
    add_matrix(x, y);
    return 0;
}