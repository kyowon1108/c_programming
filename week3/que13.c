#include <stdio.h>

int main() {
    double ary1[4] = { 1.5, 2.3, 7.7, 4.9 };
    double ary2[4] = { 3.4, 5.2, 4.0, 9.1 };
    double ary3[4] = { 0.3, 7.2, 8.4, 6.6 };

    double * ary[3] = { ary1, ary2, ary3 };
    double sum = 0;
    for (int i = 0; i < 3; ++i) {
        printf("%d 번째 배열 : ", i + 1);
        for (int j = 0; j < 4; ++j) {
            double num = ary[i][j];
            printf("%.1f ", ary[i][j]);
            sum += num;
        }
        printf("\n");
    }
    printf("평균 : %.1f", sum / 12);
    return 0;
}