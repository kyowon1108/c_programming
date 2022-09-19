#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    while ( i <= 100) {
        if (i % 2 == 0) sum -= i;
        else sum += i;
        ++i;
    }
    printf("гу : %d", sum);
    return 0;
}