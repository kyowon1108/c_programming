#include <stdio.h>

char getchar_f() {
    return fgetc(stdin); // getchar�� ������ �ϴ� �Լ�
}

void putchar_f(char c) {
    fputc(c, stdout);// putchar�� ������ �ϴ� �Լ�
    return;
}

int main() {
    printf("�Ʒ��� getchar_f, putchar_f�� test�Դϴ�.\n");
    char a = getchar_f();
    putchar_f(a);

    getchar_f();

    printf("\n\n");
    printf("�Ʒ��� getchar, putchar�� test�Դϴ�.\n");
    int b = getchar();
    putchar(b);

    printf("\n");
    return 0;

}