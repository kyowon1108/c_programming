/*
2022204080 �̱���
*/

#include <stdio.h>

char stack[100];
int top = 0;

int main() {
    printf("�Է��� ������ ���� : ");
    int num;
    scanf("%d", &num);

    while (num--) {
        printf("���� : ");
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