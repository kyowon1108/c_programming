/*
2022204080 이교원

*/
#include <stdio.h>

void sum_sub (int x, int y, int * sum, int * sub) {
    *sum = x + y; // 덧셈을 포인터 변수에 저장
    *sub = (x > y) ? x - y : y - x; // 뺄셈을 포인터 변수에 저장 
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