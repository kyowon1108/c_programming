/*
2022204080 이교원
sum에 point의 주소에 있는 값을 더하면서 주소값 +1ㅁ
*/

#include <stdio.h>

int main() {
    double arr[10] = { 0.1, 2.0, 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2 };
    double *point = arr;
    double sum = 0;
    printf("배열: ");
    for (int i = 0; i < 10; ++i) {
        printf("%.2f ", *point);
        sum += *point++;
    }
    printf("\n평균: %f", sum / 10);
    return 0;
}