#include <stdio.h>
#include <string.h>

char stack[100];
int top = 0;

int main() {
    char str[100];
    scanf("%s", str);

    int isrev = 1;
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == '(') {
            // '(' �� ������ ������ �ִ� ���ÿ� ���� reverse ���ڿ��� �����
            for (int j = top - 1; j >= 0; --j) {
                printf("%c", stack[j]);
            }
            isrev = 0; // reverse�� ����
            top = 0;
        }
        if (isrev == 1) {
            // ��ȣ �ȿ� �ο����� ������ stack�� ���ڿ��� �־����
            stack[top++] = str[i];
        } else {
            // �ƴϸ� �ٷ� �����
            printf("%c", str[i]);
        }
        if (str[i] == ')') isrev = 1; // ��ȣ�� �ݱ�� reverse�� ����
    }
    return 0;
}