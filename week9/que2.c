/*
2022204080 이교원
해당 문자열을 mystory.txt에 추가로 저장함
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE * fp = fopen("mystory.txt", "at");
    
    fputs("#즐겨먹는 음식 : 짬뽕, 탕수육\n", fp);
    fputs("#취미 : 축구\n", fp);
    fclose(fp);
    return 0;
}