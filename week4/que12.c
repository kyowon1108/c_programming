/*
2022204080 �̱���
ch�� string�� ���� ������ ����
���ڸ� ��ĭ�� �ڷ� �̷�� ������ ���ڸ� 0��° �ε����� ������ ��
*/

#include <stdio.h>
#include <string.h>

void main(void) {
    char string[100];

    strcpy(string, "String.");
    int strl = strlen(string);

    for (int i = 0; i < strl; ++i) {
        char ch = string[strl - 1];
        for (int j = strl - 1; j > 0; --j) {
            string[j] = string[j - 1];
        }
        string[0] = ch;
        printf("[%d] %s \n", i, string);
    }
}