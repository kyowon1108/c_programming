#include <stdio.h>
#include <stdlib.h>
#include<string.h>

double stack[1000];
int top = 0;

int main() {
    int alplen;
    scanf("%d", &alplen);

    char str[100];
    scanf("%s", str);

    int alpnum[30];
    for (int i = 0; i < alplen; ++i) {
        int len;
        scanf("%d", &len);
        alpnum[i] = len;
    } // 각 알파벳에 치환할 수 넣기

    for (int i = 0; i < strlen(str); ++i) {
        char a = str[i];
        if (a >= 'A' && a <= 'Z') {
            stack[top++] = (double)alpnum[a - 65];
        } else {
            double num1, num2; // 스택에서 두 수를 꺼내 연산
            num1 = stack[--top];
            num2 = stack[--top];
            
            printf("(num1 : %.2f, num2 : %.2f)\n", num1, num2);
            if (a == '+') stack[top++] = num1 + num2;
            if (a == '-') stack[top++] = num1 - num2;
            if (a == '*') stack[top++] = num1 * num2;
            if (a == '/') stack[top++] = num1 / num2;
        }
    }
    
    printf("%.2f", stack[--top]);
    return 0;
}