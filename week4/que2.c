#include <stdio.h>
#include <string.h>
// ���ڿ� �� �Լ�

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
    /* ���� ���信 �����ִ� �������
    while (*a && *b) { // a�� b�� ���� ���̸� ���� ���
        if (*a != *b)
            return (*a < *b) ? -1 : 1;
        a++, b++;
    }
    if (*a != *b)
        return (*a < *b) ? -1 : 1;
    return 0; // a�� b�� ���� ��� 0 ����
    */
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