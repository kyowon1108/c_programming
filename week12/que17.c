#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1000000000

int stack[100];
int top = 0;

int main() {
    int len;
    scanf("%d", &len);

    for (; top < len; ++top) {
        scanf("%d", &stack[top]);
    }

    int min = MAX;
    while(top--) {
        if (stack[top] < min) min = stack[top];
    }
    printf("%d", min);
    return 0;
}