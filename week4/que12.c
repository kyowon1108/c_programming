#include <stdio.h>
#include <string.h>

void main(void) {
    char string[100];

    strcpy(string, "String.");
    int strl = strlen(string);

    for (int i = 0; i < strl; ++i) {
        char ch = string[strl - 1];// ch�� string�� ���� ������ ����
        for (int j = strl - 1; j > 0; --j) {
            printf("%d > %c, %c\n", j, string[j], string[j - 1]);
            string[j] = string[j - 1]; // ���ڸ� ��ĭ�� �ڷ� �̷�
        }
        string[0] = ch;// ������ ���ڸ� 0��° �ε����� ������ ��
        printf("[%d] %s \n", i, string);
    }
}