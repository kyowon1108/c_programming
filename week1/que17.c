/*
2022204080 �̱���
1�� �ڸ����� 10���� ���� ��������
10�� �ڸ����� 10���� ���� ����(int)

*/

#include <stdio.h>

int main() {
    int num;
    printf("���ڸ� ���� �Է��ϼ��� : ");
    scanf("%d", &num);
    printf("1�� �ڸ� �� : %d\n", num % 10);
    printf("10�� �ڸ� �� : %d", num / 10);
    return 0;
}