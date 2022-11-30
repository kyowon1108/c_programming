/*
2022204080 이교원
arr를 포인터 변수에 저장해 주소값을 출력함

*/

#include <stdio.h>

int main() {
    double arr[3];
    double *address = arr;
    for (int i = 0; i < 3; ++i) {
        printf("arr[%d]의 주소: %p\n", i, address++);
    }
    return 0;
}