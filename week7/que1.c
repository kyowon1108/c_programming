#include <stdio.h>

int main() {
    printf("초 (second) 입력 : ");
    int num;
    scanf("%d", &num);
    int hour = num / 3600; // 1시간은 3600초임
    int minute = (num / 60) % 60; // 분은 초를 60으로 나눈 값의 60과의 나머지 값임
    int second = num % 60; // 초는 분으로 나누고 난 값의 나머지임
    printf("[h:%d, m:%d, s:%d]", hour, minute, second);
    return 0;

}