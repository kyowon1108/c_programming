#include <stdio.h>

int main() {
    int num;
    int count = 0;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);
    for (int i = 2; i < num; ++i) { // 2부터 시작해 약수를 찾음
        int re = num % i; // 약수는 나머지가 0인 경우임
        printf("%d %% %d = %d\n", num, i, re);
        if (re == 0) ++count;
    }
    printf("약수의 개수 : %d", count);
    return 0;
}