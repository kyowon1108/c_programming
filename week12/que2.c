#include <stdio.h>
#define max 100

char stack[max];
int top = 0;

int main() {
    printf("�Է� : ");
    int num;
    scanf("%d", &num);

    while (num) {
        stack[top++] = num % 2 + '0';
        num /= 2;
    }

    printf("��� : %s\n", &stack);
}