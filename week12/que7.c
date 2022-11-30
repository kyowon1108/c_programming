/*
2022204080 ÀÌ±³¿ø
*/

#include <stdio.h>

int stack[100];
int top = 0;

int main() {
    int num;
    scanf("%d", &num);

    int a = num;
    while (a) {
        stack[top++] = a % 10;
        a /= 10;
    }

    int sum = 0;
    int ten = 1;
    for (int i = top - 1; i >= 0; --i) {
        sum += stack[i] * ten;
        ten *= 10;
    }

    if (num > sum) printf("bigger");
    else if (num < sum) printf("smaller");
    else printf("equal");
}