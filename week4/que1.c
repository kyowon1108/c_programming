#include <stdio.h>
#include <string.h>

char *StrCpy(char *str, const char *src)
{
    char *a; // �������� ����� ���� ������ ����
    for (a = str; *str++ = *src++;);
    // for���� Ȯ���Ͽ� str�� �ּҾȿ� �ִ°��� src�� �ּҿ� ������
    return a; // a ����
}

int main() {
    char string[100]; // ������ ������ ����

    strcpy(string, "C ��� �������"); // string.h�� ����Ǿ� �ִ� strcpy �Լ�
    puts(string);
    
    StrCpy(string, "������ȭ��"); // ���� ������ StrCpy �Լ�
    puts(string);

    return 0;
}