/*
2022204080 이교원
a에서 시작해서 b가 될때까지 i를 출력

*/

#include <stdio.h>

int main() {
    int a, b;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; ++i) {
        printf("%d ", i);
    }
    return 0;
}