#include <stdio.h>
#include <string.h>
// 문자열 비교 함수

int StrCmp(char * a, char * b) {
    int a1 = 0; 
    int b1 = 0;
    while (*a != 0) {
        a1 += *a++;
    }
    while (*b != 0) {
        b1 += *b++;
    }
    if (a1 > b1) return 1;
    else if (a1 < b1) return -1; 
    /* 과제 정답에 적혀있는 구현방식
    while (*a && *b) { // a와 b가 같은 길이를 가질 경우
        if (*a != *b)
            return (*a < *b) ? -1 : 1;
        a++, b++;
    }
    if (*a != *b)
        return (*a < *b) ? -1 : 1;
    return 0; // a와 b가 같을 경우 0 리턴
    */
}

int main() {
    int result;
    result = strcmp("abc", "ABC");
    printf("%d\n", result);

    result = StrCmp("abc", "abcde");
    printf("%d\n", result);

    result = StrCmp("World Cup", "world cup");
    printf("%d\n", result);

    return 0;
}