#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter number of elements: ");
    int num1;
    scanf("%d", &num1);
    int * ptr = (int*)malloc(sizeof(int) * num1);

    for (int i = 0; i < num1; ++i) {
        ptr[i] = i + 1;
    }

    printf("the elements of the array are: ");
    for (int i = 0; i < num1; ++i) {
        printf("%d, ", ptr[i]);
    }

    printf("\n\nEnter the new size of the array: ");
    int num2;
    scanf("%d", &num2);

    ptr = (int*)realloc(ptr, sizeof(int) * num2);

    for (int i = 0; i < num2; ++i) {
        ptr[i] = i + 1;
    }

    printf("the elements of the array are: ");
    for (int i = 0; i < num2; ++i) {
        printf("%d, ", ptr[i]);
    }

    free(ptr);

    return 0;
}