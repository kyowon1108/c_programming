#include <stdio.h>

void a(int (*arr)[5], int num) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            arr[i][j] = num;
        }
    }
}

int main() {
    int arr[4][5];
    int num;
    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &num);
    // for (int i = 0; i < 5; ++i) {
    //     for (int j = 0; j < 5; ++j) {
    //         arr[i][j] = num;
    //     }
    // }
    a(arr, num);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}