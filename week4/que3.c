#include <stdio.h>
#include <string.h>

char * StrCat(char * str, const char * src) {
    // char *a = str;
    // while (*src) {
    //     *a++ = *src++;
    // }
    // *a = 0;
    // return str;
    int i;
    for (i = 0; *src; ++i) {
        *(str+i) = *src++;
    }
    *(str+i) = 0;
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
// 이거 코드 정상작동이 안됨