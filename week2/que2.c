/*
2022204080 �̱���
num ������ ������ �ϳ� �Է¹���
tentotwo �Լ��� num�� 1���� Ŭ ��� ����Լ��� ���� num / 2�� ���� �Լ��� �������
num�� 1�� �� ��쿡 num % 2�� ���� printf��
�Է¹��� num�� 2������ tentotwo�� ���� �����
*/
#include <stdio.h>

// int tentotwo(int num) {
// 	if (num > 1) tentotwo(num / 2);
//     printf("%d", num % 2);	
// }

// int main() {
//     int num;
//     printf("���� �ϳ� �Է� : ");
//     scanf("%d", &num);
//     printf("�Է¹��� ���� %d�� 2���� : ", num);
//     tentotwo(num);
//     return 0;
// }

int main() {
    int arr[20], num, i;
    int len = sizeof(arr) / sizeof(int);

    printf("���� �ϳ� �Է� : ");
    scanf("%d", &num);
    printf("�Է¹��� ���� %d�� 2�μ� : ", num);
    
    int count = 0;
    for (i = 0; i < len; ++i) {
        if (num % 2 == 1) {
            num /= 2;
            arr[i] = 1;
        } else if (num % 2 == 0) {
            num /= 2;
            arr[i] = 0;
        }
        if (num < 1) break;
        ++count;
    }
    
    for (i = count; i >= 0; --i) {
        printf("%d", arr[i]);
    }

    return 0;
}