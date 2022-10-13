#include <stdio.h>

int main() {
    int month, a, b = 0, c, day;
    char start_day;

    printf("월을 입력하세요 : ");
    scanf("%d", &month);
    fflush(stdin);
    printf("그 해 첫번째 요일을 입력하세요 : ");
    scanf("%c", &start_day);


    printf("%d %c", month, start_day);

    return 0;
}