/*
2022204080 �̱���
arr�� ������ ������ ���� �� point�� ���� ���
*/

#include <stdio.h>

int main() {
    double arr[10] = { 0.1, 2.0, 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2 };
    double *point = arr; 
    for (int i = 0; i < 10; ++i) {
        printf("%.2f ", *point++);
    }
    return 0;
}