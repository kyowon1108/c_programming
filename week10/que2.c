#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter number of elements: ");
    int num, sum = 0;
    scanf("%d", &num);

    int * ptr = (int*)malloc(sizeof(int) * num);

    printf("Enter elements: ");
    for (int i = 0; i < num; ++i) {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}