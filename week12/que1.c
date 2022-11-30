/*
2022204080 이교원
크기가 100인 스택을 생성한 후 스택의 top번째에 입력받은 str의 i번째에 입력
*/

#include <stdio.h>
#include <string.h>

char stack[100];
int top = 0;

int main() {
    printf("입력 : ");
    char str[100];
    scanf("%s", str);
    
    for (int i = strlen(str) - 1; i >= 0; --i) {
        stack[top++] = str[i];
    }
    printf("출력 : %s", stack);
    return 0;
}
