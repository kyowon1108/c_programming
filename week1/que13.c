#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    while (i <= 100) {
        if (i % 2 == 1) { // Ȧ���� ��� sum�� i �� ����
            sum += i;
        }
        ++i;
    }
    printf("Ȧ���� �� : %d", sum);
    return 0;
}