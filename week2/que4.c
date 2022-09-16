#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int result = 1;
    printf("단어를 입력하세요 : ");
    scanf("%s", str);
    int last = strlen(str)-1;
    for (int i = 0; i < strlen(str)/2; ++i) {
        if (str[i] != str[last]) result = 0;
        --last;
    }
    printf(result ? "회문입니다" : "회문이 아닙니다");
    return 0;
}