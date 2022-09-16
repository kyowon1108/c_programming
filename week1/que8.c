#include <stdio.h>

int main() {
    char a;
    printf("문자를 입력하세요 : ");
    scanf("%c", &a);

    if (a == 'f' || a == 'F') printf("여자");
    if (a == 'm' || a == 'M') printf("남자");
    return 0;
}