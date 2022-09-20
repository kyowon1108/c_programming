#include <stdio.h>

int main() {
    int arr[5][5];
    int num;
    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &num);
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            arr[i][j] = num;
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}