#include <stdio.h>

int tentotwo(int num) {
	if (num > 1) tentotwo(num / 2); // ����Լ��� ����� num�� 2�� ���� ��(int)�� ����
	printf("%d", num % 2); // 2�� �������� �������� ������ 1, �ƴϸ� 0�� > 2�� ������
		
}

int main() {
    int num;
    printf("���ڸ� �Է����ּ��� : ");
    scanf("%d", &num);
    tentotwo(num);
    return 0;
}