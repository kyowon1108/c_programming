/*
2022204080 이교원
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char stack[100];
int top = 0;

int main() {
    int len;
    scanf("%d", &len);
    // 반복할 횟수 입력
    for (int i = 0; i < len; ++i) {
        char str;
        scanf("%c", &str); // 문자열 입력받음
        getchar();
        if (str == '0') { // 만약 입력받은 문자열이 '0'이면
            if (top <= 0) continue; // top이 0인 경우 넘기기
            stack[top--] = 0; // top -1 하고 pop stack
        } else stack[top++] = str; // push stack
        
    }

    if (!top) printf("YES"); // top이 0이면 yes 아니면 no
    else printf("NO");
}