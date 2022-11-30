/*
2022204080 이교원
*/

#include <stdio.h>

int stack[1024];
int top = 0;

int main() {
    printf("입력할 수의 개수 : ");
    int num;
    scanf("%d", &num);

    int i = 0;
    while (i++ < num) {
        printf("정수 : ");
        int a;
        scanf("%d", &a);
        if (a == 0) {
            if (top <= 0) continue;
            stack[top--] = 0;
            continue;
        }
        stack[top++] = a;
    }
    int sum = 0;
    for (int i = 0; i <= top; ++i) {
        sum += stack[i];
    }
    printf("합 : %d", sum);
    return 0;
}