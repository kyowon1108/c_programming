/*
2022204080 �̱���
ũ�Ⱑ 100�� ������ ������ �� ������ top��°�� �Է¹��� str�� i��°�� �Է�
*/

#include <stdio.h>
#include <string.h>

char stack[100];
int top = 0;

int main() {
    printf("�Է� : ");
    char str[100];
    scanf("%s", str);
    
    for (int i = strlen(str) - 1; i >= 0; --i) {
        stack[top++] = str[i];
    }
    printf("��� : %s", stack);
    return 0;
}
