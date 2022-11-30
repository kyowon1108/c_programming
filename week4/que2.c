/*
2022204080 이교원
문자열 비교 함수
a와 b가 같은 길이를 가질 경우
a와 b가 같을 경우 0 리턴
*/

#include <stdio.h>
#include <string.h>

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
    else return 0;
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

char * StrCmp (const char * str1, const char * str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return (*str1 < *str2) ? -1 : 1;
        }
        str1++, str2++;
    }
    if (*str1 != *str2)
        return (*str1 < *str2) ? -1 : 1;
    
    return 0;
}