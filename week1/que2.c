#include <stdio.h>

int tentotwo(int num) {
	if (num > 1) tentotwo(num / 2);
	printf("%d", num % 2);
		
}

int main() {
    int num;
    printf("���ڸ� �Է����ּ��� : ");
    scanf("%d", &num);
    tentotwo(num);
    return 0;
}