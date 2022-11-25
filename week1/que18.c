#include <stdio.h>

int main() {
    int num;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    num = (num > 0) ? num : -num; // num이 양수이면 그대로, 음수이면 -를 곱해 저장함
    printf("%d", num);
    return 0;
}