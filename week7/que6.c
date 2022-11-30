/*
2022204080 이교원
srand(time(NULL)) : 시간을 seed 값으로 넣기 때문에 해주는 과정임
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("주사위 결과 : %d, %d", (rand() % 6) + 1, (rand() % 6) + 1);
}