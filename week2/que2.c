/*
2022204080 이교원
num 변수에 정수를 하나 입력받음
tentotwo 함수는 num이 1보다 클 경우 재귀함수를 통해 num / 2의 값을 함수에 집어넣음
num이 1이 될 경우에 num % 2한 값을 printf함
입력받은 num의 2진수를 tentotwo를 통해 출력함
*/
#include <stdio.h>

int tentotwo(int num) {
	if (num > 1) tentotwo(num / 2);
    printf("%d", num % 2);	
}

int main() {
    int num;
    printf("정수 하나 입력 : ");
    scanf("%d", &num);
    printf("입력받은 정수 %d의 2진수 : ", num);
    tentotwo(num);
    return 0;
}