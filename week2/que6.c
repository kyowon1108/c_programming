/*
2022204080 �̱���

*/
#include <stdio.h>

// void printRes(int *num1, int *num2) {
//     int add = *num1 + *num2;
//     int dec = (*num1 > *num2) ? *num1 - *num2 : *num2 - *num1;
//     printf("�� ������ �� : %d\n", add);
//     printf("�� ������ �� : %d", dec);
// }

// int main() {
//     int a, b;
//     printf("a, b�� �Է��Ͻÿ�");
//     scanf("%d %d", &a, &b);
//     printRes(&a, &b);
//     return 0;
// }

void sum_sub (int x, int y, int * sum, int * sub) {
    *sum = x + y;
    *sub = (x > y) ? x - y : y - x;
}

int main() {
    int x, y;
    int sum, sub;
    printf("a, b�� �Է��Ͻÿ�");
    scanf("%d %d", &x, &y);

    sum_sub(x, y, &sum, &sub);

    printf("�� ������ �� : %d\n", sum);
    printf("�� ������ �� : %d", sub);

    return 0;
}