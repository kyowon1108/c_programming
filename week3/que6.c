/*
2022204080 �̱���
�Է¹��� �迭�� ����� ����ϴ� �Լ�
20�� 4���� ���� ����Ű�� Ƚ���� �Է¹���
30�� 2���� ���� ����Ű�� Ƚ���� �Է¹���
40�� 3���� ���� ����Ű�� Ƚ���� �Է¹���
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
    printf("20�� ������ ���� ����Ű�� Ƚ��\n");
    for (int i = 0; i < 4; ++i) {
        printf("%dth : ", i + 1);
        double num;
        scanf("%lf", &num);
        arr[0][i] = num;
    }
    printf("\n30�� ������ ���� ����Ű�� Ƚ��\n");
    for (int i = 0; i < 2; ++i) { 
        printf("%dth : ", i + 1);
        double num;
        scanf("%lf", &num);
        arr[1][i] = num;
    }
    printf("\n40�� ������ ���� ����Ű�� Ƚ��\n");
    for (int i = 0; i < 3; ++i) { 
        printf("%dth : ", i + 1);
        double num;
        scanf("%lf", &num);
        arr[2][i] = num;
    }

    printf("\n\n���ɺ� ��� ���� ����Ű�� Ƚ��\n");
    printf("20�� : %.2f\n30��: %.2f\n40�� : %.2f", aver(arr[0], 4), aver(arr[1], 2), aver(arr[2], 3));
    return 0;

}