#include <stdio.h>
#include <stdlib.h>
#include<string.h>

char stack[100];
int top = 0;

void solve(char * str, int len) {
    for (int i = 0; i < len; ++i) {
        if (str[i] == '(') { // '('일 경우에는 스택에 추가
            stack[top++] = '(';
        }
        if (str[i] == ')') { // ')'일 경우에
            if (stack[top-1] == '(') { // 맨 마지막이 열려있다면
                stack[top--] = 0; // 닫고 pop
            } else {
                stack[top++] == str[i]; // 아니면 '(' push
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