/*
2022204080 이교원

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int win = 0, drew = 0;
    int is_lose = 0;

    while (!is_lose) {
        printf("바위는 1, 가위는 2, 보는 3 : ");
        int num;
        scanf("%d", &num);

        if (num == 1) printf("당신은 바위 선택, ");
        else if (num == 2) printf("당신은 바위 선택, ");
        else printf("당신은 보 선택, ");

        srand(time(NULL));
        int cpu = rand() % 3 + 1;

        if (cpu == 1) printf("컴퓨터는 바위 선택, ");
        else if (cpu == 2) printf("컴퓨터는 바위 선택, ");
        else printf("컴퓨터는 보 선택, ");

        if ((num == 1 && cpu == 2) || (num == 2 && cpu == 3) || (num == 3 && cpu == 1)) { // 플레이어가 이기는 경우
            printf("당신이 이겼습니다.\n");
            win++;
        }
        else if (num == cpu) {// 비기는 경우
            printf("비겼습니다.\n");
            drew++;
        }
        else { // 컴퓨터가 이기는 경우
            printf("당신이 졌습니다.\n");
            is_lose = 1;
        }
    }
    printf("게임의 결과: %d승, %d무", win, drew);
    return 0;

}