/*
2022204080 이교원
a가 'f' or 'F'이면 여자 출력
a가 'm' or 'M'이면 남자 출력
*/

#include <stdio.h>

int main() {
    char a;
    printf("문자를 입력하세요 : ");
    scanf("%c", &a);

    if (a == 'f' || a == 'F') printf("여자"); 
    if (a == 'm' || a == 'M') printf("남자");
    return 0;
}