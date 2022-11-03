#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * StrLeft (char * str, int len);
char * StrRight (char * str, int len);
char * StrMid (char * str, int len);

void main(void) {
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
}

char * StrLeft ( char * string, int len) {
    char * p = strdup(string);
    p[len] = 0;
    return p;
}

char * StrMid(char * string, int pos) {
    return strdup(&string[pos]);
}

char *StrRight (char * string, int len) {
    int n = strlen(string);
    return strdup(&string[n - len]);
}
// char * StrLeft(char * str, int len) {
//     int i;
//     for (i = 0; i < len; ++i);
//     str[i] = 0;
//     return str;
// }

// char * StrRight(char * str, int len) {
//     int strl = strlen(str);
//     for (int i = strl; i > len; --i) {
//         str++;
//     }
//     return str;
// }

// char *StrMid(char * str, int len) {
//     int strl = strlen(str);
//     for (int i = 0; i < len; ++i) {
//         str++;
//     }
//     return str;
// }