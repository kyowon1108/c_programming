#include <stdio.h>

int tentotwo(int num) {
	if (num > 1) tentotwo(num / 2); // 재귀함수를 사용해 num을 2로 나눈 값(int)을 넣음
	printf("%d", num % 2); // 2로 나눴을때 나머지가 있으면 1, 아니면 0임 > 2의 제곱근
		
}

int main() {
    int num;
    printf("숫자를 입력해주세요 : ");
    scanf("%d", &num);
    tentotwo(num);
    return 0;
}