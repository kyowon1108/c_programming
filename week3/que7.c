#include <stdio.h>

int main() {
    int arr[4][5];
    int count = 1;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            arr[i][j] = count++; // i번째 행 j번째 열에 count를 넣으면서 +1을 함
        }
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}