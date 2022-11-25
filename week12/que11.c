#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char stack[100];
int top = 0;

int main() {
    char str[100];
    scanf("%s", str);

    for (int i = 0; i < strlen(str); ++i) {
        stack[top++] = str[i];
    }

    while (top--) {
        if (stack[top] == '6') printf("9"); // 6�� 9��, 9�� 6���� ���
        else if (stack[top] == '9') printf("6");
        else if (stack[top] >= 'a' && stack[top] <= 'z') {
            printf("%c", stack[top] - 32); // �ҹ��ڴ� �빮�ڷ�
        } else if (stack[top] >= 'A' && stack[top] <= 'Z') {
            printf("%c", stack[top] + 32); // �빮�ڴ� �ҹ��ڷ�
        }
        else printf("%c", stack[top]); // �ƹ��͵� �ƴϸ� �׳� ���
    }
    return 0;
}