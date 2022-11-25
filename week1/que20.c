#include <stdio.h>

int main() {
    int num;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) { // num의 수만큼 *을 출력함
        printf("*");
    }
    return 0;
}