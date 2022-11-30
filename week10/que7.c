/*
2022204080 이교원
*/

#include <stdio.h>
#include <stdlib.h>

void plus_one(int * arr, int n);

int main() {
    printf("배열의 길이 입력: ");
    int num;
    scanf("%d", &num);

    int * ptr = (int*)malloc(sizeof(int) * num);

    printf("배열의 값 입력: ");
    
    for (int i = 0; i < num; ++i) {
        scanf("%d", &ptr[i]);
    }

    plus_one(ptr, num);

    for (int i = 0; i < num; ++i) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}

void plus_one(int * arr, int n) {
    for (int i = 0; i < n; ++i) ++arr[i];
}