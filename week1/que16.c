#include <stdio.h>

int main() {
    int a, b;
    printf("�� ���� �Է��ϼ��� : ");
    scanf("%d %d", &a, &b);
    int c = b, d = a;
    a = c, b = d;
    printf("��ȯ �� �� �� : %d %d", a, b); // �� �� ��ȯ
    return 0;
}