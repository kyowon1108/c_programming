#include <stdio.h>

int main() {
    double ary1[4] = { 1.5, 2.3, 7.7, 4.9 };
    double ary2[4] = { 3.4, 5.2, 4.0, 9.1 };
    double ary3[4] = { 0.3, 7.2, 8.4, 6.6 };
    double aver[3];
    char *pr[3] = {"ù", "��", "��"};
    double * ary[3] = { ary1, ary2, ary3 }; // ������ �迭�ȿ� ary 1~3�� ������
    
    for (int i = 0; i < 3; ++i) {
        double sum = 0;
        for (int j = 0; j < 4; ++j) {
            double num = ary[i][j];
            sum += num;
            aver[i] = sum / 12;
        }
    }

    double max_aver = 0; // max_aver�� ���� ū ����� ������
    int max_index = 0; // max_index�� ���� ū ����� �����ϴ� �ε����� ������
    for (int i = 0; i < 3; ++i) {
        if (aver[i] > max_aver) {
            max_aver = aver[i];
            max_index = i;
        }
    }

    printf("%s ��° �迭�� : ", pr[max_index]);
    for(int i = 0; i < 4; ++i) {
        printf("%5.1f", ary[max_index][i]);
    }
    printf("\n��� : %.1f", max_aver);
    return 0;
}