#include <stdio.h>

int tentotwo(int num) {
	if (num > 1) tentotwo(num / 2);
    printf("%d", num % 2);	
}

int main() {
    int num;
    printf("정수 하나 입력 : ");
    scanf("%d", &num);
    printf("입력받은 정수 %d의 2진수 : ", num);
    tentotwo(num);
    return 0;
}