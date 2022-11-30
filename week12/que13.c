/*
2022204080 이교원
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
        arr[top++] = num; // 스택에 입력받은 num을 추가
    }
    
    int max = 0;
    while(top--) {
        if (arr[top] > max) max = arr[top];
    }
    printf("최대 : %d", max);
    return 0;
}