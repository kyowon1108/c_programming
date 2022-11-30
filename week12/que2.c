/*
2022204080 이교원
*/

#include <stdio.h>

char stack[100];
int top = 0;

int main() {
    printf("입력 : ");
    int num;
    scanf("%d", &num);

    while (num) {
        stack[top++] = num % 2 + '0';
        num /= 2;
    }

    printf("출력 : %s\n", &stack);
}