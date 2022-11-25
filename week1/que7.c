#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) { // while문을 사용해 10이 될떄까지 i를 +1함
        printf("%d\n", i++);
    }
    return 0;
}