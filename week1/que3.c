#include <stdio.h>

int gcd(int num1, int num2) {
	if (num1 % num2 != 0) return gcd(num2, num1 % num2); // ����Լ��� ����� num2�� num1���� num2�� ���� �������� ����
	else return num2; // �������� 0�� �ƴ� ��쿡 num2 ���
}

int main() {
    int num1, num2;
    printf("�� ���� ������ �Է����ּ��� : ");
    scanf("%d %d", &num1, &num2);
    printf("�ִ����� : %d", gcd(num1, num2));
    return 0;
}
