#include <stdio.h>

int main() {
    int num;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    num = (num > 0) ? num : -num;
    printf("%d", num);
    return 0;
}