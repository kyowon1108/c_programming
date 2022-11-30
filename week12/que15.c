/*
2022204080 이교원
*/

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

    int result = 1;
    int i = 0;
    while (top--) {
        if (stack[top] != str[i++]) {
            result = 0;
        }
    }

    if (!result) printf("회문이 아닙니다.");
    else printf("회문이 맞습니다.");
    
    return 0;
}