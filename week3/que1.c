#include <stdio.h>

int main() {
    int arr[5][5];
    int num;
    printf("�迭�� ���ҿ� ������ ��? ");
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