#include <stdio.h>

void printRes(int *num1, int *num2) {
    int add = *num1 + *num2;
    int dec = (*num1 > *num2) ? *num1 - *num2 : *num2 - *num1;
    printf("�� ������ �� : %d\n", add);
    printf("�� ������ �� : %d", dec);
}

int main() {
    int a, b;
    printf("a, b�� �Է��Ͻÿ�");
    scanf("%d %d", &a, &b);
    printRes(&a, &b);
    return 0;
}