#include <stdio.h>
#include <string.h>

char *StrCpy(char *str, const char *src)
{
    char *a; // 마지막에 출력을 위한 포인터 변수
    for (a = str; *str++ = *src++;);
    // for문을 확용하여 str의 주소안에 있는값을 src의 주소에 대입함
    return a; // a 리턴
}

int main() {
    char string[100]; // 내용을 복사할 변수

    strcpy(string, "C 언어 길라잡이"); // string.h에 내장되어 있는 strcpy 함수
    puts(string);
    
    StrCpy(string, "정보문화사"); // 직접 제작한 StrCpy 함수
    puts(string);

    return 0;
}