/*
2022204080 �̱���
*/

#include <stdio.h>
#include <stdlib.h>

void plus_one(int * arr, int n);

int main() {
    printf("�迭�� ���� �Է�: ");
    int num;
    scanf("%d", &num);

    int * ptr = (int*)malloc(sizeof(int) * num);

    printf("�迭�� �� �Է�: ");
    
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