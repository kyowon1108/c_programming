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
        int cpu = rand() % 3 + 1;
        if ((num == 1 && cpu == 2) || (num == 2 && cpu == 3) || (num == 3 && cpu == 1)) // user win
        else if (num == cpu) // drew
        else {}
    }
}