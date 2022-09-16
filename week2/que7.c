#include <stdio.h>
#include <string.h>

int main() {
    int a[5] = {5, 19, 27, 21, 34 };
    int b[5];

    memmove(b, a, sizeof(int) * 5);
    printf("A배열의 값\n  ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", a[i]);
    }
    printf("\nB배열의 값\n  ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", b[i]);
    }
    return 0;
}