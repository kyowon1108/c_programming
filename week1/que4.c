/*
2022204080 �̱���
�ּ� ������� num1�� num2�� ���� ������ �ִ������� ���� ���� ����
*/

#include <stdio.h>

int s(int num1, int num2) {
	if (num1 % num2 != 0) return s(num2, num1 % num2);
	else return num2;
}

int main() {
    int num1, num2;
    printf("�� ���� ������ �Է����ּ��� : ");
    scanf("%d %d", &num1, &num2);
    int result = (num1 * num2) / s(num1, num2);
    printf("�ּҰ���� : %d", result);
    return 0;
}