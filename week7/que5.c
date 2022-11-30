/*
2022204080 이교원
가로를 그린 후 마지막 행일 경우
세로로 전환, 이 과정을 값이 다 찰때까지 반복함
*/

#include <stdio.h>
 
int main() {
    int a[15][15] = { 0, };
    int num = 1, x = 0, y = 0;
    int i, k, j;
    int size, sign = 1;
 
    printf("크기를 입력해주세요 : ");
    scanf("%d", &size);
 
    for (k = 0; k < size; ++k) {
        a[y][x] = num++;
        x += sign;
    }
    x -= 1;
    for (i = size - 1; i > 0; --i) {
        for (j = 0; j < i; ++j) {
            y += sign;
            a[y][x] = num++;
        }
        sign *= -1;
        for (k = 0; k < i; ++k) {
            x += sign;
            a[y][x] = num++;
        }
    }
 
    for (int i = 0; i < size; ++i) {    
        for (int j = 0; j < size; ++j) {
            printf("%3d ", a[i][j]);
        }
        printf("\n\n");
    }    
 
    return 0;
}  