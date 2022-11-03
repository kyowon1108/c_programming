#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int win = 0, lose = 0, drew = 0;
    int is_lose = 0;

    char * a = {"바위", "가위", "보"};
    while (!is_lose) {
        printf("바위는 1, 가위는 2, 보는 3 : ");
        int num;
        scanf("%d", &num);
        srand(time(NULL));
        int cpu = rand(time % 3) + 1;
        if ((num ==  && cpu == )) // user win
    }
}