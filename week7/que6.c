#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("�ֻ��� ��� : %d, %d", (rand() % 6) + 1, (rand() % 6) + 1);
}