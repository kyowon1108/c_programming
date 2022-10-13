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