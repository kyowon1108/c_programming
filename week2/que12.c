#include <stdio.h>

int main() {
    int arr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };
    int *point = &arr[9];
    printf("�迭:");
    for (int i = 0; i < 10; ++i) {
        printf(" %d", arr[i]);
    }
    printf("\n����:");
    for (int i = 0; i < 10; ++i) {
        printf(" %d", *point--);
    }
    return 0;
}