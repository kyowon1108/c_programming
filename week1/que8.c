#include <stdio.h>

int main() {
    char a;
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%c", &a);

    if (a == 'f' || a == 'F') printf("����"); // a�� 'f' or 'F'�̸� ���� ���
    if (a == 'm' || a == 'M') printf("����");// a�� 'm' or 'M'�̸� ���� ���
    return 0;
}