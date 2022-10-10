/*
2022204080 이교원
for문으로 10개의 정수를입력받아 num 변수에 넣음.
isOdd 함수는 num이 홀수인지 짝수인지 나머지를 구하는 값을 통해 구함.
num % 2가 1이면 홀수, 0이면 짝수임.
for문으로 num의 i번째 값을 isOdd수를 통해 홀수와 짝수를 출력함
*/
#include <stdio.h>

int isOdd(int num) {
    return num % 2;
}

int main() {
    int num[10];
    printf("10개의 정수 입력\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; ++i) {
        if (isOdd(num[i])) printf("홀수 출력 : %d, ", num[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; ++i) {
        if (!isOdd(num[i])) printf("짝수 출력 : %d, ", num[i]);
    }
    return 0;
}