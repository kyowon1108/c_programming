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
            // '(' 가 나오면 이전에 있던 스택에 쌓인 reverse 문자열을 출력함
            for (int j = top - 1; j >= 0; --j) {
                printf("%c", stack[j]);
            }
            isrev = 0; // reverse를 해제
            top = 0;
        }
        if (isrev == 1) {
            // 괄호 안에 싸여있지 않으면 stack에 문자열을 넣어놓음
            stack[top++] = str[i];
        } else {
            // 아니면 바로 출력함
            printf("%c", str[i]);
        }
        if (str[i] == ')') isrev = 1; // 괄호가 닫기면 reverse를 실행
    }
    return 0;
}