#include <stdio.h>

void a(int (*arr)[5], int num) { // 2�� �迭 �����Ϳ� num�� ���� �������
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            arr[i][j] = num;
        }
    }
}

int main() {
    int arr[4][5];
    int num;
    printf("�迭�� ���ҿ� ������ ��? ");
    scanf("%d", &num);
    a(arr, num);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%2d ", arr[i][j]); // �Լ��� ���� ������ ���� �����
        }
        printf("\n");
    }
    return 0;
}