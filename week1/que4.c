/*
2022204080 이교원
최소 공배수는 num1과 num2를 곱한 값에서 최대공약수를 나눈 값과 같음
*/

#include <stdio.h>

int s(int num1, int num2) {
	if (num1 % num2 != 0) return s(num2, num1 % num2);
	else return num2;
}

int main() {
    int num1, num2;
    printf("두 개의 정수를 입력해주세요 : ");
    scanf("%d %d", &num1, &num2);
    int result = (num1 * num2) / s(num1, num2);
    printf("최소공배수 : %d", result);
    return 0;
}