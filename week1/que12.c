#include <stdio.h>

int main() {
    int count = 0;
    int sum = 0;
    int i = 50;
    do {
        if (i % 2 == 1) { // Ȧ���� ��� Ȧ�� ���� +1, sum�� i�� ����
            ++count;
            sum += i;
        }
        ++i;
    } while (i <= 100);
    printf("Ȧ���� ���� : %d\nȦ���� �� : %d", count, sum);
    return 0;
}