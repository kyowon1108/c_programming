/*
2022204080 �̱���
����, ������ ������ ������ ������ �����
*/
#include <stdio.h>

void sum_sub (int x, int y, int * sum, int * sub) {
    *sum = x + y;
    
    *sub = (x > y) ? x - y : y - x;
}

int main() {
    int x, y;
    int sum, sub;
    printf("a, b�� �Է��Ͻÿ�");
    scanf("%d %d", &x, &y);

    sum_sub(x, y, &sum, &sub);

    printf("�� ������ �� : %d\n", sum);
    printf("�� ������ �� : %d", sub);

    return 0;
}