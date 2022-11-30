/*
2022204080 �̱���
���ڿ� �� �Լ�
a�� b�� ���� ���̸� ���� ���
a�� b�� ���� ��� 0 ����
*/

#include <stdio.h>
#include <string.h>

int StrCmp(char * a, char * b) {
    int a1 = 0; 
    int b1 = 0;
    while (*a != 0) {
        a1 += *a++;
    }
    while (*b != 0) {
        b1 += *b++;
    }
    if (a1 > b1) return 1;
    else if (a1 < b1) return -1; 
    else return 0;
}

int main() {
    int result;
    result = strcmp("abc", "ABC");
    printf("%d\n", result);

    result = StrCmp("abc", "abcde");
    printf("%d\n", result);

    result = StrCmp("World Cup", "world cup");
    printf("%d\n", result);

    return 0;
}

char * StrCmp (const char * str1, const char * str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return (*str1 < *str2) ? -1 : 1;
        }
        str1++, str2++;
    }
    if (*str1 != *str2)
        return (*str1 < *str2) ? -1 : 1;
    
    return 0;
}