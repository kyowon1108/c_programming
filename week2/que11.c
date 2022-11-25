#include <stdio.h>

int main() {
    double arr[10] = { 0.1, 2.0, 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2 };
    double *point = arr; // arr을 포인터 변수에 저장
    for (int i = 0; i < 10; ++i) {
        printf("%.2f ", *point++); // point의 값을 출력
    }
    return 0;
}