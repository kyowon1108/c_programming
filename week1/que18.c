#include <stdio.h>

int main() {
    int num;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &num);
    num = (num > 0) ? num : -num; // num�� ����̸� �״��, �����̸� -�� ���� ������
    printf("%d", num);
    return 0;
}