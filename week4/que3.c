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

    strcpy(string, "���� ");
    strcat(string, "���α׷����Դϴ�.");
    puts(string);

    strcpy(string, "���� ");
    StrCat(string, "���α׷����Դϴ�.");
    puts(string);
}
// �̰� �ڵ� �����۵��� �ȵ�