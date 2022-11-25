#include <stdio.h>

int main() {
    int arr[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j){
            scanf("%d", &arr[i][j]); // 배열을 scanf
        }
    }
    printf("[변경 전]\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%4d", arr[i][j]); // scanf한 배열을 그대로 출력함
        }
        printf("\n");
    }
    printf("\n[변경 후]\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%4d", arr[j][i]); // 행과 열을 반대로 출력함
        }
        printf("\n");
    }
    return 0;
}