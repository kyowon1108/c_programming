#include <stdio.h>
#include <stdlib.h>
#include<string.h>

char stack[100];
int top = 0;

void solve(char * str, int len) {
    for (int i = 0; i < len; ++i) {
        if (str[i] == '(') { // '('�� ��쿡�� ���ÿ� �߰�
            stack[top++] = '(';
        }
        if (str[i] == ')') { // ')'�� ��쿡
            if (stack[top-1] == '(') { // �� �������� �����ִٸ�
                stack[top--] = 0; // �ݰ� pop
            } else {
                stack[top++] == str[i]; // �ƴϸ� '(' push
            }
        } 
    }
}
int main() {
    char str[100];
    scanf("%s", str);
    solve(str, strlen(str));

    printf("%d", top);
}