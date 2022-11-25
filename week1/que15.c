#include <stdio.h>

int test(int num) {
    for (int i = 2; i < num; ++i) {
        if (num % i == 0) return 0; // 약수가 존재하면 소수가 아님, 그러므로 for문으로 2부터 시작해 나머지가 0이 있는지 찾음
    }
    return 1;
}

int main() {
    int num;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);
    printf((test(num)) ? "소수가 맞습니다." : "소수가 아닙니다.");
    return 0;
}