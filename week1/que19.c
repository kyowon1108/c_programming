#include <stdio.h>

int main() {
    int age;
    printf("나이를 입력하세요 : ");
    scanf("%d", &age);
    if (age <= 6 || age >= 60) { // 나이가 6세 이하이거나 60세 이상이면 TRUE
        printf("무료입니다.");
    } else {
        printf("1000원입니다.");
    }
    return 0;
}