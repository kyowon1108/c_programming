#include <stdio.h>
#include <ctype.h>
#include <string.h>

char * StrLTrim(char * str) {
    for (int i = 0; i < strlen(str) - 1; ++i) {
        // printf("%d, %d, %d\n", i, *str, isspace(str[i]));
        if (isspace(str[i])) {
            str++;
        }
    }
    return str;
}

void main(void) {
    char string[100];
    char * pstr;

    strcpy(string, "\n\t    abcde");
    pstr = StrLTrim(string);
    puts(pstr);
}