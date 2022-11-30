/*
2022204080 ÀÌ±³¿ø

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * StrLeft (char * str, int len);
char * StrRight (char * str, int len);
char * StrMid (char * str, int len);

void main() {
    char string[100];
    char * p;

    strcpy(string, "abcde");
    p = StrLeft(string, 2);
    puts(p); free(p);

    strcpy(string, "abcde");
    p = StrRight(string, 2);
    puts(p); free(p);

    strcpy(string, "abcde");
    p = StrMid(string, 2);
    puts(p); free(p);
    
    return 0;
}

char * StrLeft ( char * string, int len) {
    char * p = strdup(string);
    p[len] = 0;
    return p;
}

char * StrMid (char * string, int pos) {
    return strdup(&string[pos]);
}

char * StrRight (char * string, int len) {
    int n = strlen(string);
    return strdup(&string[n - len]);
}