/*
2022204080 �̱���
isOdd�� num�� Ȧ������ ¦������ �������� ���ϴ� ���� ���� ����.
num % 2�� 1�̸� Ȧ��, 0�̸� ¦����.
odd ������ even ������ ������ Ȧ���� ���� ��� �迭�� ���� �ε����� ¦���� ����� ����� �ε����� ������
for���� ���� 10���� ������ �Է¹����� ���� a�� ������ ���� Ȧ���̳� ¦���̳Ŀ� ���� �ٸ� �ε����� ����.
*/
#include <stdio.h>

int isOdd(int num) {
    return num % 2;
}

int main() {
    int num[10];
    int odd = 0, even = 9;
    printf("10���� ���� �Է�\n");
    for (int i = 0; i < 10; ++i) {
        int a;
        scanf("%d", &a);
        if (a % 2 == 0) {
            num[even] = a;
            --even;
        } else {
            num[odd] = a;
            ++odd;
        }
    }
    printf("{ ");
    for (int i = 0; i < 10; ++i) {
        if (i != 9) printf("%d, ", num[i]);
        else printf("%d", num[i]);
    }
    printf(" }");
    return 0;
}