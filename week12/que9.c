/*
2022204080 �̱���
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// �� ���������� �Է¹޴� ����� ���̸� �������� ��
// �� �տ� ���̴� ����⸦ �������� �ڿ� ū ������ŭ +�� ����
// ���� 2��°�� ���̴� ����Ⱑ ���� ũ�ٸ� �� �ڷδ� �Ⱥ��� > �� �� ����Ⱑ �� ����� �������δ� �� �տ� ���̴� ������ ����

int main() {
    printf("�� ������� ���� : ");
    int num;
    scanf("%d", &num);

    int * arr = (int*)malloc(sizeof(int) * num);

    for (int i = 0; i < num; ++i) {
        printf("������� ���� : ");
        scanf("%d", &arr[i]);
    }

    int front = arr[num -1];
    int count = 1;

    for (int i = num - 1; i >= 0; --i) {
        if (arr[i] > front) {
            ++count;
            front = arr[i];
        }
    }

    printf("���̴� ������� ���� : %d", count);

    return 0;
}