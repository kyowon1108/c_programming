/*
2022204080 이교원
scanf를 통해 입력받은 단어를 str에 저장함.
last변수는 str의 마지막 인덱스를 가지고 있음.
for문(i는 str의 길이의 절반)을 통해 i번째 인데스의 값과 last - i번째 인덱스의 값을 비교함
전부 같으면 result의 값을 1, 하나라도 틀린게 있으면 0으로 저장해 회문인지 아닌지 출력함
*/
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