/*
2022204080 이교원
*/

#include <stdio.h>

char stack[100];
int top = 0;

int main() {
    printf("입력할 정수의 개수 : ");
    int num;
    scanf("%d", &num);

    while (num--) {
        printf("정수 : ");
        int a;
        scanf("%d", &a);
        if (a < 10 && a % 2 == 0) stack[top++] = a + '0';
    }

    printf("{");
    while(top--) {
        printf("%c", stack[top]);
        if (top != 0) printf(",");
    }
    printf("}");
}