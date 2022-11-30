/*
2022204080 이교원
a : 마지막에 출력을 위한 포인터 변수
for문을 확용하여 str의 주소안에 있는값을 src의 주소에 대입함
string : 내용을 복사할 변수
string.h에 내장되어 있는 strcpy 함수
*/

#include <stdio.h>
#include <string.h>

char *StrCpy(char *str, const char *src)
{
    char *a; 
    for (a = str; *str++ = *src++;);
    
    return a;
}

int main() {
    char string[100];

    strcpy(string, "C 언어 길라잡이");
    puts(string);
    
    StrCpy(string, "정보문화사");
    puts(string);

    return 0;
}