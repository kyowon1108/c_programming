#include <stdio.h>

int test(int num) {
    for (int i = 2; i < num; ++i) {
        if (num % i == 0) return 0; // ����� �����ϸ� �Ҽ��� �ƴ�, �׷��Ƿ� for������ 2���� ������ �������� 0�� �ִ��� ã��
    }
    return 1;
}

int main() {
    int num;
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%d", &num);
    printf((test(num)) ? "�Ҽ��� �½��ϴ�." : "�Ҽ��� �ƴմϴ�.");
    return 0;
}