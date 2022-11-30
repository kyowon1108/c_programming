/*
2022204080 이교원
from에 입력된 char을 str에서 찾아서 to로 교체함
*/

#include <stdio.h>
#include <string.h>

void StrReplace(char * str, char from, char to) {
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == from) str[i] = to;
    }
}

void main(void) {
    char string[100];

    strcpy(string, "It is a good time!");
    StrReplace(string, 'i', 'I');
    puts(string);
}