#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    while (i <= 100) {
        if (i % 2 == 0) sum -= i; // 礎熱橾 唳辦 -
        else sum += i; // �汝鶺� 唳辦 +
        ++i;
    }
    printf("м : %d", sum);
    return 0;
}