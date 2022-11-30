/*
2022204080 이교원
오른쪽에 있는 줄바꿈, 스페이스바 등의 문자열을 isspace를 통해 판별한 후 주소값을 -1함
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char * StrRTrim(char * str) {
    for (int i = strlen(str) - 1; i >= 0; --i) {
        if (isspace(str[i])) {
            str[i] = 0;
        }
    }
    return str;
}

void main(void) {
    char string[100];
    char * pstr;

    strcpy(string, "abcde \t\n ");
    pstr = StrRTrim(string);
    puts(pstr);
}