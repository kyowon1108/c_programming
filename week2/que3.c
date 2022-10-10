/*
2022204080 이교원
isOdd는 num이 홀수인지 짝수인지 나머지를 구하는 값을 통해 구함.
num % 2가 1이면 홀수, 0이면 짝수임.
odd 변수과 even 변수를 선언해 홀수가 나올 경우 배열에 넣을 인덱스와 짝수의 경우일 경우의 인덱스를 저장함
for문을 통해 10개의 정수를 입력받으며 변수 a에 저장한 값을 홀수이냐 짝수이냐에 따라 다른 인덱스에 넣음.
*/
#include <stdio.h>

int isOdd(int num) {
    return num % 2;
}

int main() {
    int num[10];
    int odd = 0, even = 9;
    printf("10개의 정수 입력\n");
    for (int i = 0; i < 10; ++i) {
        int a;
        scanf("%d", &a);
        if (a % 2 == 0) {
            num[even] = a;
            --even;
        } else {
            num[odd] = a;
            ++odd;
        }
    }
    printf("{ ");
    for (int i = 0; i < 10; ++i) {
        if (i != 9) printf("%d, ", num[i]);
        else printf("%d", num[i]);
    }
    printf(" }");
    return 0;
}