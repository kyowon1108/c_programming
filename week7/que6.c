#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("주사위 결과 : %d, %d", (rand() % 6) + 1, (rand() % 6) + 1);
}