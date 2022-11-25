#include <stdio.h>

int main() {
    int arr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };
    int *point = &arr[9];
    printf("배열:");
    for (int i = 0; i < 10; ++i) {
        printf(" %d", arr[i]);
    }
    printf("\n역순:");
    for (int i = 0; i < 10; ++i) {
        printf(" %d", *point--); // point의 주소를 출력하면서 동시에 주소를 -1함
    }
    return 0;
}