#include <stdio.h>

int main() {
    char a;
    printf("문자를 입력하세요 : ");
    scanf("%c", &a);

    if (a == 'f' || a == 'F') printf("여자"); // a가 'f' or 'F'이면 여자 출력
    if (a == 'm' || a == 'M') printf("남자");// a가 'm' or 'M'이면 남자 출력
    return 0;
}