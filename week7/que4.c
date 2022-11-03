#include <stdio.h>

void ShowArr(int (* arr)[4]) {
    printf("----Show Array----\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%5d", *(*(arr + i) + j));
        }
        printf("\n");
    }
}

void RotateArr(int (*arr)[4]) {
    int res[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            res[i][j] = arr[3 - j][i];
        }
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr[i][j] = res[i][j];
        }
    }
}

int main(void) {
    int i = 0;

    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    for (i = 0; i < 4; ++i) {
        ShowArr(arr);
        RotateArr(arr);
    }

    return 0;
}