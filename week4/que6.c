/*
2022204080 �̱���
�ҹ������� �Ǻ� �� �빮���� �ƽ�Ű�ڵ�� �ҹ����� �ƽ�Ű�ڵ� ������ ����
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char * StrUpr(char * ptr) {
    char * cp = ptr;
    for (; *ptr; ++ptr) {
        if ('a' <= *ptr && *ptr <= 'z') {
            *ptr += 'A' - 'a';
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