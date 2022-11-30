/*
2022204080 이교원
1의 자리수는 10으로 나눈 나머지임
10의 자리수는 10으로 나눈 값임(int)

*/

#include <stdio.h>

int main() {
    int num;
    printf("두자리 수를 입력하세요 : ");
    scanf("%d", &num);
    printf("1의 자리 수 : %d\n", num % 10);
    printf("10의 자리 수 : %d", num / 10);
    return 0;
}