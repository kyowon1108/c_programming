#include <stdio.h>

int main() {
    int arr[10];
    int frontidx = 0, backidx = 9;
    printf("�� 10���� ���� �Է�\n");
    for (int i = 0; i < 10; ++i) {
        int num;
        printf("�Է� : ");
        scanf("%d", &num);

        if (num % 2 == 1) arr[frontidx++] = num; // Ȧ���̸� ���ڸ� �ε������� ä��
        else arr[backidx--] = num; // ¦���̸� ���ڸ� �ε������� ä��
    }

    printf("�迭 ����� ��� : ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}