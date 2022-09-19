#include <stdio.h>

int main() {
    int height, weight;
    printf("본인의 키와 몸무게를 입력해주세요.\n키(cm) : ");
    scanf("%d", &height);
    printf("몸무게 (kg) : ");
    scanf("%d", &weight);
    double result = ((double)weight / (((double)height / 100) * ((double)height / 100)));
    printf("당신의 BMI 측정량은 %.2f입니다.", result);
    return 0;
}