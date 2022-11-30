/*
2022204080 ÀÌ±³¿ø
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char stack[100];
int top = 0;

int main() {
    char str[100];
    scanf("%s", str);

    char check;
    for (int i = 0; i < strlen(str); ++i) {
        if (check != str[i]) {
            check = str[i];
            stack[top++] = str[i];
        }
    }

    while (top--) {
        printf("%c", stack[top]);
    }

    return 0;
}