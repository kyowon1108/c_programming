/*
2022204080 �̱���
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

    if (!result) printf("ȸ���� �ƴմϴ�.");
    else printf("ȸ���� �½��ϴ�.");
    
    return 0;
}