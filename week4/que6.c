#include <stdio.h>
#include <ctype.h>
#include <string.h>

void StrUpr(char * str) {
    while(*str) {
        *str = toupper(*str);
        str++;
    }
}

void main(void) {
    char string[100];

    strcpy(string, "beautiful girl.");
    StrUpr(string);
    puts(string);
}