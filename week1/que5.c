#include <stdio.h>

int main() {
    int height, weight;
    printf("������ Ű�� �����Ը� �Է����ּ���.\nŰ(cm) : ");
    scanf("%d", &height);
    printf("������ (kg) : ");
    scanf("%d", &weight);
    double result = ((double)weight / (((double)height / 100) * ((double)height / 100)));
    printf("����� BMI �������� %.2f�Դϴ�.", result);
    return 0;
}