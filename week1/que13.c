#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    while (i <= 100) {
        if (i % 2 == 1) { // 홀수인 경우 sum에 i 값 더함
            sum += i;
        }
        ++i;
    }
    printf("홀수의 합 : %d", sum);
    return 0;
}