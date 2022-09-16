#include <stdio.h>

int isOdd(int num) {
    if (num % 2 == 1) return 1;
    return 0;
}

int main() {
    int num[10];
    printf("10개의 정수 입력\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; ++i) {
        if (isOdd(num[i])) printf("홀수 출력 : %d, ", num[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; ++i) {
        if (!isOdd(num[i])) printf("짝수 출력 : %d, ", num[i]);
    }
    return 0;
}