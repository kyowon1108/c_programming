#include <stdio.h>

int tentotwo(int num) {
	if (num > 1) tentotwo(num / 2);
    printf("%d", num % 2);	
}

int main() {
    int num;
    printf("���� �ϳ� �Է� : ");
    scanf("%d", &num);
    printf("�Է¹��� ���� %d�� 2���� : ", num);
    tentotwo(num);
    return 0;
}