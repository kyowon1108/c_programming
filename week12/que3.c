#include <stdio.h>
#define max 5

char stack[max];
int top = 0;

int main() {
    while (1) {
        printf("��ɾ� �Է�(+, -, *) : ");
        char func;
        scanf("%c", &func);
        getc(stdin);
        if (func == '+') {
            if (top == max) {
                printf("%s\n����Ǿ����ϴ�.\n", stack);
                break;
            }
            printf("���� �Է� : ");
            int num;
            scanf("%d", &num);
            getc(stdin);
            stack[top++] = num + '0';
        } else if (func == '-') {
            printf("���� ���� �� ��� : %c\n", stack[top-1]);
            stack[top--] = 0;
        } else if (func == '*') {
            printf("����Ǿ����ϴ�.\n");
            break;
        } else {
            printf("ERROR!\n");
        }
    }
    printf("��� : %s", stack);
}