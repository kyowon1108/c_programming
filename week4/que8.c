#include <stdio.h>
#include <ctype.h>
#include <string.h>

char * StrRTrim(char * str) {
    for (int i = strlen(str) - 1; i >= 0; --i) {
        // printf("%d, %d, %d\n", i, *str, isspace(str[i]));
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