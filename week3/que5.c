/*
2022204080 �̱���
main �Լ��� max�� �����ͺ����̹Ƿ� �� �ּҸ� �ޱ� ���� 2�� ������ ���
*/

#include <stdio.h>

void getMax(int **max, int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        if (**max < arr[i]) **max = arr[i];
    }
}

int main() {
    int arr[5];
    int max = 0;
    int * ptr = &max;
    int ** pptr = &ptr;

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &arr[i]);
    }

    getMax(pptr, arr, 5);
    printf("\n�ִ� : %d", max);
    return 0;
}