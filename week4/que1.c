/*
2022204080 �̱���
a : �������� ����� ���� ������ ����
for���� Ȯ���Ͽ� str�� �ּҾȿ� �ִ°��� src�� �ּҿ� ������
string : ������ ������ ����
string.h�� ����Ǿ� �ִ� strcpy �Լ�
*/

#include <stdio.h>
#include <string.h>

char *StrCpy(char *str, const char *src)
{
    char *a; 
    for (a = str; *str++ = *src++;);
    
    return a;
}

int main() {
    char string[100];

    strcpy(string, "C ��� �������");
    puts(string);
    
    StrCpy(string, "������ȭ��");
    puts(string);

    return 0;
}