#include <stdio.h>

int main() {
    FILE * fp = fopen("que8.c", "r");

    int num1, num2, total = 0;
    char sign;

    while (scanf(fp, "%d %d %c", &num1, %num2, sign) != EOF) {
        switch (c) {
            case '+':
                total = num1 + num2;
                break;
            case '-':
                total = num1 - num2;
                break;
            case '*':
                total = num1 * num2;
                break;
            case '/':
                total = num1 / num2;
                break;
            case '%':
                total = num1 % num2;
                break;
        }
        printf(" %d %c %d = %d\n", num1, sign, num2, total);
    }
    fclose(fp);
    return 0;
}