/*
2022204080 �̱���
for������ 10���� �������Է¹޾� num ������ ����.
isOdd �Լ��� num�� Ȧ������ ¦������ �������� ���ϴ� ���� ���� ����.
num % 2�� 1�̸� Ȧ��, 0�̸� ¦����.
for������ num�� i��° ���� isOdd���� ���� Ȧ���� ¦���� �����
*/
#include <stdio.h>

int isOdd(int num) {
    return num % 2;
}

int main() {
    int num[10];
    printf("10���� ���� �Է�\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; ++i) {
        if (isOdd(num[i])) printf("Ȧ�� ��� : %d, ", num[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; ++i) {
        if (!isOdd(num[i])) printf("¦�� ��� : %d, ", num[i]);
    }
    return 0;
}