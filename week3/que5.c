#include <stdio.h>

void getMax(int **max, int *arr, int len) {
    //main 함수의 max가 포인터변수이므로 그 주소를 받기 위해 2중 포인터 사용
    int *m = 0;
    m = arr; // m이 arr을 가리키게 함
    for (int i = 0; i < len; ++i) {
        if (*m < arr[i]) m = &arr[i];
    }
    *max = m;
}

int main() {
    int arr[5] = { 1, 45, 7, 23, 44 };
    int *max = 0;

    getMax(&max, arr, 5);
    printf("최댓값 : %d", *max);
    return 0;
}