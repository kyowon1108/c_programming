#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    while (i <= 100) {
        if (i % 2 == 1) {
            sum += i;
        }
        ++i;
    }
    printf("È¦¼öÀÇ ÇÕ : %d", sum);
    return 0;
}