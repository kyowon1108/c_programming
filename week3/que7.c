#include <stdio.h>

int main() {
    int arr[4][5];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            int num;
            scanf("%d", &num);
            arr[i][j] = num;
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