#include <stdio.h>
#include <string.h>

char * StrChr(const char * str, char src) {
    while (*str != src){ str++; }
    return (char*)str;
}

void main(void) {
    char string[100];
    char * pos;

    strcpy(string, "This is a book.");
    pos = strchr(string, 'a');
    printf("%d\n", pos);
    printf("%d ��ġ�� a�� ����\n", pos - string);

    strcpy(string, "This is a book.");
    pos = StrChr(string, 'a');
    printf("%d ��ġ�� a�� ����\n", pos - string);
}