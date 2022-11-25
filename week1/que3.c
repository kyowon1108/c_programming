#include <stdio.h>

int gcd(int num1, int num2) {
	if (num1 % num2 != 0) return gcd(num2, num1 % num2); // 재귀함수를 사용해 num2와 num1에서 num2를 나눈 나머지를 넣음
	else return num2; // 나머지가 0이 아닌 경우에 num2 출력
}

int main() {
    int num1, num2;
    printf("두 개의 정수를 입력해주세요 : ");
    scanf("%d %d", &num1, &num2);
    printf("최대공약수 : %d", gcd(num1, num2));
    return 0;
}
