#include <stdio.h>

int isOdd(int num) {
    if (num % 2 == 1) return 1;
    return 0;
}

int main() {
    int num[10];
    int odd = 0, even = 9;
    printf("10개의 정수 입력\n");
    for (int i = 0; i < 10; ++i) {
        int a;
        scanf("%d", &a);
        if (a % 2 == 0) {
            num[even] = a;
            --even;
        } else {
            num[odd] = a;
            ++odd;
        }
    }
    printf("{ ");
    for (int i = 0; i < 10; ++i) {
        if (i != 9) printf("%d, ", num[i]);
        else printf("%d", num[i]);
    }
    printf(" }");
    return 0;
}