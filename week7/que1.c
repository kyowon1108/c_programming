/*
2022204080 �̱���
1�ð��� 3600����
���� �ʸ� 60���� ���� ���� 60���� ������ ����
�ʴ� ������ ������ �� ���� ��������
*/

#include <stdio.h>

int main() {
    printf("�� (second) �Է� : ");
    int num;
    scanf("%d", &num);
    int hour = num / 3600;
    int minute = (num / 60) % 60;
    int second = num % 60;
    printf("[h:%d, m:%d, s:%d]", hour, minute, second);
    return 0;

}