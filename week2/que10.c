#include <stdio.h>

int main() {
    double arr[3];
    double *address = arr;
    for (int i = 0; i < 3; ++i) {
        printf("arr[%d]�� �ּ�: %p\n", i, address++);
    }
    return 0;
}