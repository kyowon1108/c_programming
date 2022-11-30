/*
2022204080 이교원
*/

#include <stdio.h>

char stack[5];
int top = 0;

int main() {
    while (1) {
        printf("명령어 입력(+, -, *) : ");
        char func;
        scanf("%c", &func);
        getc(stdin);
        if (func == '+') {
            if (top == 5) {
                printf("%s\n종료되었습니다.\n", stack);
                break;
            }
            printf("정수 입력 : ");
            int num;
            scanf("%d", &num);
            getc(stdin);
            stack[top++] = num + '0';
        } else if (func == '-') {
            printf("정수 제거 및 출력 : %c\n", stack[top-1]);
            stack[top--] = 0;
        } else if (func == '*') {
            printf("종료되었습니다.\n");
            break;
        } else {
            printf("ERROR!\n");
        }
    }
    printf("출력 : %s", stack);
}