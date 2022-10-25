#include <stdio.h>
#include <string.h>

char * StrRev(char * str) {
    char * rev = str;
    char * test = str;
    char tem;

    while (*str++);
    str -= 2;

    while(test < str){
        tem = *str;
        *str-- = *test;
        *test++ = tem;
    }
    return rev;
}

void main(void) {
    char string[100];
    char * pos;

    strcpy(string, "abcde 12345");
    pos = StrRev(string);
    puts(string);
}