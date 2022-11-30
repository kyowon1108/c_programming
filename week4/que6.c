/*
2022204080 이교원
소문자인지 판별 후 대문자의 아스키코드와 소문자의 아스키코드 뺀값을 더함
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char * StrUpr(char * ptr) {
    char * cp = ptr;
    for (; *ptr; ++ptr) {
        if ('a' <= *ptr && *ptr <= 'z') {
            *ptr += 'A' - 'a';
        }
    }
    return cp;
}

void main(void) {
    char string[100];

    strcpy(string, "beautiful girl.");
    StrUpr(string);
    puts(string);
}