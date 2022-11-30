/*
2022204080 이교원
mystory.txt에 저장한 문자열을 줄 단위로 불러옴
str에 저장해 출력함
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE * fp = fopen("mystory.txt", "rt");
    char str[1024];
    while (feof(fp) == 0) {
        fgets(str, sizeof(str), fp);
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}