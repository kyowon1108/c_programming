#include <stdio.h>

int main() {
    int count = 0;
    int sum = 0;
    int i = 50;
    do {
        if (i % 2 == 1) {
            ++count;
            sum += i;
        }
        ++i;
    } while (i <= 100);
    printf("È¦¼öÀÇ °³¼ö : %d\nÈ¦¼öÀÇ ÇÕ : %d", count, sum);
    return 0;
}