#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int win = 0, lose = 0, drew = 0;
    int is_lose = 0;

    char * a = {"����", "����", "��"};
    while (!is_lose) {
        printf("������ 1, ������ 2, ���� 3 : ");
        int num;
        scanf("%d", &num);
        srand(time(NULL));
        int cpu = rand(time % 3) + 1;
        if ((num ==  && cpu == )) // user win
    }
}