/*
2022204080 이교원
두 수를 새로운 변수를 만들어 교환
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    int c = b, d = a;
    a = c, b = d;
    printf("교환 된 두 수 : %d %d", a, b); 
    return 0;
}