/*
2022204080 �̱���
double ������ ���ڸ� �ҷ��� total�� �߰���
*/

#include <stdio.h>

int main() {
    FILE * fp = fopen("number.txt", "rt");
    double num = 0;
    double total = 0;

    while (fscanf(fp, "%lf", &num) != EOF) {
        printf("%.2lf\n", num);
        total += num;
    }
    printf("%.2lf", total);
    fclose(fp);
    return 0;
}