#include <stdio.h>

void getMax(int **max, int *arr, int len) {
    //main �Լ��� max�� �����ͺ����̹Ƿ� �� �ּҸ� �ޱ� ���� 2�� ������ ���
    int *m = 0;
    m = arr; // m�� arr�� ����Ű�� ��
    for (int i = 0; i < len; ++i) {
        if (*m < arr[i]) m = &arr[i];
    }
    *max = m;
}

int main() {
    int arr[5] = { 1, 45, 7, 23, 44 };
    int *max = 0;

    getMax(&max, arr, 5);
    printf("�ִ� : %d", *max);
    return 0;
}