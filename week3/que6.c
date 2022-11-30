/*
2022204080 이교원
입력받은 배열의 평균을 출력하는 함수
20대 4명의 윗몸 일으키기 횟수를 입력받음
30대 2명의 윗몸 일으키기 횟수를 입력받음
40대 3명의 윗몸 일으키기 횟수를 입력받음
*/

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
    printf("20대 연령의 윗몸 일으키기 횟수\n");
    for (int i = 0; i < 4; ++i) {
        printf("%dth : ", i + 1);
        double num;
        scanf("%lf", &num);
        arr[0][i] = num;
    }
    printf("\n30대 연령의 윗몸 일으키기 횟수\n");
    for (int i = 0; i < 2; ++i) { 
        printf("%dth : ", i + 1);
        double num;
        scanf("%lf", &num);
        arr[1][i] = num;
    }
    printf("\n40대 연령의 윗몸 일으키기 횟수\n");
    for (int i = 0; i < 3; ++i) { 
        printf("%dth : ", i + 1);
        double num;
        scanf("%lf", &num);
        arr[2][i] = num;
    }

    printf("\n\n연령별 평균 윗몸 일으키기 횟수\n");
    printf("20대 : %.2f\n30대: %.2f\n40대 : %.2f", aver(arr[0], 4), aver(arr[1], 2), aver(arr[2], 3));
    return 0;

}