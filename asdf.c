#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int month, a, b, c, day;
    char start_day;
    while (1) {
        printf("���� �Է��ϼ���");
        scanf("%d", &month);
        if (1 > month || month > 12)
        {
            printf("�˸��� ��?�� �Է��ϼ���.\n");
            continue;
        }
        getchar();
        printf("�� �� ù��° ������ �Է��ϼ���");
        scanf("%c", &start_day);
        
        printf("\n");
        if (start_day == 'S')
            start_day = 0;
        else if (start_day == 'M')
            start_day = 1;
        else if (start_day == 'T')
            start_day = 2;
        else if (start_day == 'W')
            start_day = 3;
        else if (start_day == 'H')
            start_day = 4;
        else if (start_day == 'F')
            start_day = 5;
        else if (start_day == 'A')
            start_day = 6;
        else
        {
            printf("�˸��� ���� �Է����ּ���.\n");
            continue;
        }
        break;
    }

    b = start_day;
    printf("  ��   ��   ȭ   ��   ��   ��   ��\n\n");
    if (month == 2)
    {
        day = 28;
    }
    else if ((month <= 7 && month % 2 == 1) || (8 <= month && month % 2 == 0))
    {
        day = 31;
    }
    else if ((month <= 7 && month % 2 == 0) || (8 <= month && month % 2 == 1))
    {
        day = 30;
    }

    for(int i = 0; i < b; ++i) {
        printf("     ");
    }
    for (a = 1; a <= day; ++a)
    {
        b++;
        printf("%4d%s", a, b % 7 ? " " : "\n\n");
    }

    return 0;
}