#include <stdio.h>

int main() {
    int num;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) { // num�� ����ŭ *�� �����
        printf("*");
    }
    return 0;
}