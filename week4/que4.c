/*
2022204080 이교원
str의 주소에 있는 값이 src와 같을때까지 주소를 +1하고, 찾으면 str 출력, 못찾으면 0 출력
*/

#include <stdio.h>
#include <string.h>

char * StrChr(const char * str, char src) {
    while (*str && *str != src){ str++; }
    return (*str == src) ? (char*)str : (char*)0;
}

void main(void) {
    char string[100];
    char * pos;

    strcpy(string, "This is a book.");
    pos = strchr(string, 'a');
    printf("%d\n", pos);
    printf("%d 위치에 a가 있음\n", pos - string);

    strcpy(string, "This is a book.");
    pos = StrChr(string, 'a');
    printf("%d 위치에 a가 있음\n", pos - string);
}