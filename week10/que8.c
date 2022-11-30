/*
2022204080 ÀÌ±³¿ø
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int width, radius;
    printf("input your width: ");
    scanf("%d", &width);
    printf("input your radius: ");
    scanf("%d", &radius);
    int ** res = (int**)malloc(sizeof(int*) * width);
    for (int i = 0; i < width; ++i) {
        res[i] = (int*)malloc(sizeof(int) * width);
    }
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < width; ++j) {
            *(*(res+i)+j) = 0;
        }
    }
    int startX = (width + 1) / 2 - 1;
    int startY = (width + 1) / 2 - 1;
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < width; ++j) {
            int a = sqrt(pow((startX - j), 2) + pow((startY - i), 2));
            if (a <= radius) {
                *(*(res+i)+j) = 1;
            }
        }
    }
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < width; ++j) {
            printf("%d", *(*(res+i)+j));
        }
        printf("\n");
    }
}