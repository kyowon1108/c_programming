#include <stdio.h>

double aver (double ar[], int len) {
    double sum = 0;
    for (int i = 0; i < len; ++i) {
        sum += ar[i];
    }
    return sum / len;
}

int main() {
    double arr[3][4];
    printf("20´ë ¿¬·ÉÀÇ À­¸ö ÀÏÀ¸Å°±â È½¼ö\n");
    for (int i = 0; i < 4; ++i) {
        printf("%dth : ", i + 1);
        double num;
        scanf("%lf", &num);
        arr[0][i] = num;
    }
    printf("\n30´ë ¿¬·ÉÀÇ À­¸ö ÀÏÀ¸Å°±â È½¼ö\n");
    for (int i = 0; i < 2; ++i) {
        printf("%dth : ", i + 1);
        double num;
        scanf("%lf", &num);
        arr[1][i] = num;
    }
    printf("\n40´ë ¿¬·ÉÀÇ À­¸ö ÀÏÀ¸Å°±â È½¼ö\n");
    for (int i = 0; i < 3; ++i) {
        printf("%dth : ", i + 1);
        double num;
        scanf("%lf", &num);
        arr[2][i] = num;
    }

    printf("\n\n¿¬·Éº° Æò±Õ À­¸ö ÀÏÀÃ±â È½¼ö\n");
    printf("20´ë : %.2f\n30´ë : %.2f\n40´ë : %.2f", aver(arr[0], 4), aver(arr[1], 2), aver(arr[2], 3));
    return 0;

}