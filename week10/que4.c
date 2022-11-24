#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter number of elements: ");
    int num;
    scanf("%d", &num);

    int * ptr = (int*)malloc(sizeof(int) * num);

    for (int i = 0; i < num; ++i) {
        ptr[i] = i + 1;
    }

    printf("The elements of the array are: ");
    for(int i = 0; i < num; ++i) {
        printf("%d, ", ptr[i]);
    }

    printf("\n\nEnter the new size of the array: ");
    scanf("%d", &num);

    ptr = (int*)realloc(ptr, sizeof(int) * num);

    printf("The elements of the array are: ");
    for(int i = 0; i < num; ++i) {
        printf("%d, ", ptr[i]);
    }

    free(ptr);

    return 0;
}