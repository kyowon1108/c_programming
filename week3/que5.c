/*
2022204080 이교원
main 함수의 max가 포인터변수이므로 그 주소를 받기 위해 2중 포인터 사용
*/

#include <stdio.h>

void getMax(int **max, int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        if (**max < arr[i]) **max = arr[i];
    }
}

int main() {
    int arr[5];
    int max = 0;
    int * ptr = &max;
    int ** pptr = &ptr;

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &arr[i]);
    }

    getMax(pptr, arr, 5);
    printf("\n최댓값 : %d", max);
    return 0;
}