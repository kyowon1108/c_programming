/*
2022204080 �̱���
�� ���� ���ο� ������ ����� ��ȯ
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("�� ���� �Է��ϼ��� : ");
    scanf("%d %d", &a, &b);
    int c = b, d = a;
    a = c, b = d;
    printf("��ȯ �� �� �� : %d %d", a, b); 
    return 0;
}