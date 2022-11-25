#include <stdio.h>

int main() {
    int a[5] = { 100, 150, 130, 200, 170 };
    int b[5] = { 30, 40, 30, 50, 20 };
    int c[5];
    for (int i = 0; i < 5; ++i) {
        c[i] = a[i] + b[i]; // a와 b의 i번째 인덱스를 c의 i번째 인덱스에 더함
    }
    printf("[각 직원들의 지급받을 월급 총액]\n");
    for (int i = 0; i < 5; ++i) {
        printf("직원%d  %d\n", i+1, c[i]);
    }
    return 0;
}