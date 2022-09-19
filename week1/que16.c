#include <stdio.h>

int main() {
    int a, b;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    printf("교환 된 두 수 : %d %d", b, a);
    return 0;
}