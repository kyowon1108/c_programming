#include <stdio.h>

int main() {
    int num;
    printf("성적을 입력해주세요 : ");
    scanf("%d", &num);
    switch (num / 10) {// num을 10으로 나눠서 등급을 비교함
    	case 10:
    	case 9:
    		printf("A등급입니다."); break;
    	case 8:
    		printf("B등급입니다."); break;
    	case 7:
    		printf("C등급입니다."); break;
    	case 6:
    		printf("D등급입니다."); break;
    	default:
    		printf("F등급입니다.");
	}
    return 0;
}