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
        if (stack[top] == '6') printf("9"); // 6은 9로, 9는 6으로 출력
        else if (stack[top] == '9') printf("6");
        else if (stack[top] >= 'a' && stack[top] <= 'z') {
            printf("%c", stack[top] - 32); // 소문자는 대문자로
        } else if (stack[top] >= 'A' && stack[top] <= 'Z') {
            printf("%c", stack[top] + 32); // 대문자는 소문자로
        }
        else printf("%c", stack[top]); // 아무것도 아니면 그냥 출력
    }
    return 0;
}