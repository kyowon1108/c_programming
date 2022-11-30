/*
2022204080 이교원
2중 배열 포인터에 num을 전부 집어넣음
함수를 통해 저장한 값을 출력함
*/

#include <stdio.h>

void a(int (*arr)[5], int num) {
    for (int i = 0; i < 5; ++i) {
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
    a(arr, num);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}