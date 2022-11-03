#include <stdio.h>
#include <ctype.h>
#include <string.h>

// void StrUpr(char * str) {
//     while(*str) {
//         *str = toupper(*str);
//         str++;
//     }
// }

char * StrUpr(char * ptr) {
    char * cp = ptr;
    for (; *ptr; ++ptr) {
        if ('a' <= *ptr && *ptr <= 'z') {// 소문자인지 판별
            *ptr += 'A' - 'a';// 대문자의 아스키코드와 소문자의 아스키코드 뺀값을 더함
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