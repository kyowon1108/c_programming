#include <stdio.h>

int main() {
    int month, a, b = 0, c, day;
    char start_day;

    printf("���� �Է��ϼ��� : ");
    scanf("%d", &month);
    fflush(stdin);
    printf("�� �� ù��° ������ �Է��ϼ��� : ");
    scanf("%c", &start_day);


    printf("%d %c", month, start_day);

    return 0;
}