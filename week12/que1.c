#include <stdio.h>
#include <string.h>

#define max 100

char stack[max];
int top = 0;

int main() {
    printf("�Է� : ");
    char str[100];
    scanf("%s", str);
    
    for (int i = strlen(str) - 1; i >= 0; --i) {
        stack[top++] = str[i];
    }
    printf("��� : %s", stack);
    return 0;
}