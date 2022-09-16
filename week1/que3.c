#include <stdio.h>

int gcd(int num1, int num2) {
	if (num1 % num2 != 0) return gcd(num2, num1 % num2);
	else return num2;
}

int main() {
    int num1, num2;
    printf("두 개의 정수를 입력해주세요 : ");
    scanf("%d %d", &num1, &num2);
    printf("최대공약수 : %d", gcd(num1, num2));
    return 0;
}
