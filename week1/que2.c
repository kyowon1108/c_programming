#include <stdio.h>

int tentotwo(int num) {
	if (num > 1) {
        printf("[%d]\n", num);
        tentotwo(num / 2);
    }
	printf("(%d) [%d]\n", num % 2, num);
		
}

int main() {
    int num;
    printf("숫자를 입력해주세요 : ");
    scanf("%d", &num);
    tentotwo(num);
    return 0;
}