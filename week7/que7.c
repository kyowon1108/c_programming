/*
2022204080 �̱���

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int win = 0, drew = 0;
    int is_lose = 0;

    while (!is_lose) {
        printf("������ 1, ������ 2, ���� 3 : ");
        int num;
        scanf("%d", &num);

        if (num == 1) printf("����� ���� ����, ");
        else if (num == 2) printf("����� ���� ����, ");
        else printf("����� �� ����, ");

        srand(time(NULL));
        int cpu = rand() % 3 + 1;

        if (cpu == 1) printf("��ǻ�ʹ� ���� ����, ");
        else if (cpu == 2) printf("��ǻ�ʹ� ���� ����, ");
        else printf("��ǻ�ʹ� �� ����, ");

        if ((num == 1 && cpu == 2) || (num == 2 && cpu == 3) || (num == 3 && cpu == 1)) { // �÷��̾ �̱�� ���
            printf("����� �̰���ϴ�.\n");
            win++;
        }
        else if (num == cpu) {// ���� ���
            printf("�����ϴ�.\n");
            drew++;
        }
        else { // ��ǻ�Ͱ� �̱�� ���
            printf("����� �����ϴ�.\n");
            is_lose = 1;
        }
    }
    printf("������ ���: %d��, %d��", win, drew);
    return 0;

}