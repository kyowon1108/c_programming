#include <stdio.h>
#include <string.h>

char * StrCat(char * str, const char * src) {
    int i = strlen(str);
    for (; *src; ++i) {
        *(str+i) = *src++; // str의 i번째 주소에 src의 값을 추가하면서 주소를 +1함
    }
    *(str+i) = 0; // 마지막에 char 배열의 끝을 알리기 위해 0을 집어넣음
    return str;
}

void main(void) {
    char string[100];

    strcpy(string, "나는 ");
    strcat(string, "프로그래머입니다.");
    puts(string);

    strcpy(string, "나는 ");
    StrCat(string, "프로그래머입니다.");
    puts(string);
}