#include <stdio.h>

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