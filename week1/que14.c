/*
2022204080 �̱���
2���� ������ ����� ã��
����� �������� 0�� �����
*/

#include <stdio.h>

int main() {
    int num;
    int count = 0;
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%d", &num);
    for (int i = 2; i < num; ++i) { 
        int re = num % i; 
        printf("%d %% %d = %d\n", num, i, re);
        if (re == 0) ++count;
    }
    printf("����� ���� : %d", count);
    return 0;
}