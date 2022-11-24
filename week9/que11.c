#include <stdio.h>

char getchar_f() {
    return fgetc(stdin);
}

void putchar_f(char c) {
    fputc(c, stdout);
    return;
}

int main() {
    printf("아래는 getchar_f, putchar_f의 test입니다.\n");
    char a = getchar_f();
    putchar_f(a);

    getchar_f();

    printf("\n\n");
    printf("아래는 getchar, putchar의 test입니다.\n");
    int b = getchar();
    putchar(b);

    printf("\n");
    return 0;

}