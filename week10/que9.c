/*
2022204080 이교원
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("배열의 사이즈를 입력해주세요: ");
    int size;
    scanf("%d", &size);

    int ** ptr;
    ptr = (int**)malloc(sizeof(int*) * size);

    for (int i = 0; i < size; ++i) {
        ptr[i] = (int*)malloc(sizeof(int) * size);
    }
    
    int row = 0, col = -1, step = 1, num = 0;
    int len = size;
    while (1) {
        for (int i = 0; i < size; ++i) {
            ++num;
            col += step;
            ptr[row][col] = num;
        }
        --size;

        if (size < 1) break;
        
        for (int i = 0; i < size; ++i) {
            ++num;
            row += step;
            ptr[row][col] = num;
        }

        step = -step;
    }

    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            printf("%4d", ptr[i][j]);
        }
        printf("\n");
    }
    return 0;
}