/*
2022204080 이교원
2부터 시작해 약수를 찾음
약수는 나머지가 0인 경우임
*/

#include <stdio.h>

int main() {
    int num;
    int count = 0;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);
    for (int i = 2; i < num; ++i) { 
        int re = num % i; 
        printf("%d %% %d = %d\n", num, i, re);
        if (re == 0) ++count;
    }
    printf("약수의 개수 : %d", count);
    return 0;
}