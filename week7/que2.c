/*
2022204080 �̱���
Ȧ���̸� ���ڸ� �ε������� ä��
¦���̸� ���ڸ� �ε������� ä��
*/

#include <stdio.h>

int main() {
    int arr[10];
    int frontidx = 0, backidx = 9;
    printf("�� 10���� ���� �Է�\n");
    for (int i = 0; i < 10; ++i) {
        int num;
        printf("�Է� : ");
        scanf("%d", &num);

        if (num % 2 == 1) arr[frontidx++] = num;
        else arr[backidx--] = num;
    }

    printf("�迭 ����� ��� : ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}