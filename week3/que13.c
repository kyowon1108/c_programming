#include <stdio.h>

int main() {
    double ary1[4] = { 1.5, 2.3, 7.7, 4.9 };
    double ary2[4] = { 3.4, 5.2, 4.0, 9.1 };
    double ary3[4] = { 0.3, 7.2, 8.4, 6.6 };
    double aver[3];
    char *pr[3] = {"첫", "두", "세"};
    double * ary[3] = { ary1, ary2, ary3 }; // 포인터 배열안에 ary 1~3을 저장함
    
    for (int i = 0; i < 3; ++i) {
        double sum = 0;
        for (int j = 0; j < 4; ++j) {
            double num = ary[i][j];
            sum += num;
            aver[i] = sum / 12;
        }
    }

    double max_aver = 0; // max_aver에 가장 큰 평균을 저장함
    int max_index = 0; // max_index에 가장 큰 평균이 존재하는 인덱스를 저장함
    for (int i = 0; i < 3; ++i) {
        if (aver[i] > max_aver) {
            max_aver = aver[i];
            max_index = i;
        }
    }

    printf("%s 번째 배열­ : ", pr[max_index]);
    for(int i = 0; i < 4; ++i) {
        printf("%5.1f", ary[max_index][i]);
    }
    printf("\n평균 : %.1f", max_aver);
    return 0;
}