#include <stdio.h>

int isOdd(int num) {
    if (num % 2 == 1) return 1;
    return 0;
}

int main() {
    int num[10];
    printf("10���� ���� �Է�\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; ++i) {
        if (isOdd(num[i])) printf("Ȧ�� ��� : %d, ", num[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; ++i) {
        if (!isOdd(num[i])) printf("¦�� ��� : %d, ", num[i]);
    }
    return 0;
}