#include <stdio.h>
#include <string.h>

char * StrCat(char * str, const char * src) {
    int i = strlen(str);
    for (; *src; ++i) {
        *(str+i) = *src++; // str�� i��° �ּҿ� src�� ���� �߰��ϸ鼭 �ּҸ� +1��
    }
    *(str+i) = 0; // �������� char �迭�� ���� �˸��� ���� 0�� �������
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