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
        if ('a' <= *ptr && *ptr <= 'z') {// �ҹ������� �Ǻ�
            *ptr += 'A' - 'a';// �빮���� �ƽ�Ű�ڵ�� �ҹ����� �ƽ�Ű�ڵ� ������ ����
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