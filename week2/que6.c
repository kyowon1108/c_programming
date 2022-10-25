/*
2022204080 이교원

*/
#include <stdio.h>

// void printRes(int *num1, int *num2) {
//     int add = *num1 + *num2;
//     int dec = (*num1 > *num2) ? *num1 - *num2 : *num2 - *num1;
//     printf("두 정수의 합 : %d\n", add);
//     printf("두 정수의 차 : %d", dec);
// }

// int main() {
//     int a, b;
//     printf("a, b를 입력하시오");
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
    printf("a, b를 입력하시오");
    scanf("%d %d", &x, &y);

    sum_sub(x, y, &sum, &sub);

    printf("두 정수의 합 : %d\n", sum);
    printf("두 정수의 차 : %d", sub);

    return 0;
}