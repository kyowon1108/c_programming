/*
2022204080 �̱���
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int arr[100];
int top = 0;

int main() {
    while (top != 10) {
        int num;
        scanf("%d", &num);
        arr[top++] = num; // ���ÿ� �Է¹��� num�� �߰�
    }
    
    int max = 0;
    while(top--) {
        if (arr[top] > max) max = arr[top];
    }
    printf("�ִ� : %d", max);
    return 0;
}