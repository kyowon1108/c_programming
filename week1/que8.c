/*
2022204080 �̱���
a�� 'f' or 'F'�̸� ���� ���
a�� 'm' or 'M'�̸� ���� ���
*/

#include <stdio.h>

int main() {
    char a;
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%c", &a);

    if (a == 'f' || a == 'F') printf("����"); 
    if (a == 'm' || a == 'M') printf("����");
    return 0;
}