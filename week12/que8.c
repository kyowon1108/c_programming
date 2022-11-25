#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char stack[1024];
int top = 0;

int main() {
    char str[1024];
    scanf("%[^\n]s", str);

    char * ptr = strtok(str, " ");
    while (ptr) {
        int i = strlen(ptr);
        while (i--) {
            stack[top++] = ptr[i];
        }
        printf("%s ", stack);
        memset(stack, 0, sizeof(stack) * sizeof(char));
        top = 0;
        ptr = strtok(NULL, "\n");
    }
    return 0;
}