#include <stdio.h>

int main() {
    int a, b;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    int c = b, d = a;
    a = c, b = d;
    printf("교환 된 두 수 : %d %d", a, b); // 두 수 교환
    return 0;
}