#include <stdio.h>

void printRes(int *num1, int *num2) {
    int add = *num1 + *num2;
    int dec = (*num1 > *num2) ? *num1 - *num2 : *num2 - *num1;
    printf("두 정수의 합 : %d\n", add);
    printf("두 정수의 차 : %d", dec);
}

int main() {
    int a, b;
    printf("a, b를 입력하시오");
    scanf("%d %d", &a, &b);
    printRes(&a, &b);
    return 0;
}