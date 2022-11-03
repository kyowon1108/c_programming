#include <stdio.h>

int main() {
    printf("ÃÊ (second) ÀÔ·Â : ");
    int num;
    scanf("%d", &num);
    int hour = num / 3600;
    int minute = (num / 60) % 60;
    int second = num % 60;
    printf("[h:%d, m:%d, s:%d]", hour, minute, second);
    return 0;

}