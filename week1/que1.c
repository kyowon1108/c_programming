#include <stdio.h>

int main() {
    int num;
    printf("������ �Է����ּ��� : ");
    scanf("%d", &num);
    switch (num / 10) {// num�� 10���� ������ ����� ����
    	case 10:
    	case 9:
    		printf("A����Դϴ�."); break;
    	case 8:
    		printf("B����Դϴ�."); break;
    	case 7:
    		printf("C����Դϴ�."); break;
    	case 6:
    		printf("D����Դϴ�."); break;
    	default:
    		printf("F����Դϴ�.");
	}
    return 0;
}