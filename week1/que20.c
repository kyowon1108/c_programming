/*
2022204080 이교원
num의 수만큼 *을 출력함
*/

#include <stdio.h>

int main() {
    int num;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) { 
        printf("*");
    }
    return 0;
}