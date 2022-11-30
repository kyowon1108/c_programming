/*
2022204080 이교원
왼쪽에 있는 줄바꿈, 스페이스바 등의 문자열을 isspace를 통해 판별한 후 주소값을 +1함
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char * StrLTrim(char * str) {
    while(isspace(*str)) str++;
    return str;
}

void main(void) {
    char string[100];
    char * pstr;

    strcpy(string, "\n\t    abcde");
    pstr = StrLTrim(string);
    puts(pstr);
}