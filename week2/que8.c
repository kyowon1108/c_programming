#include <stdio.h>

int main() {
    int a[5] = { 100, 150, 130, 200, 170 };
    int b[5] = { 30, 40, 30, 50, 20 };
    int c[5];
    for (int i = 0; i < 5; ++i) {
        c[i] = a[i] + b[i]; // a�� b�� i��° �ε����� c�� i��° �ε����� ����
    }
    printf("[�� �������� ���޹��� ���� �Ѿ�]\n");
    for (int i = 0; i < 5; ++i) {
        printf("����%d  %d\n", i+1, c[i]);
    }
    return 0;
}