/*
2022204080 이교원
mystory.txt에 해당 문자열들을 저장함
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE * fp = fopen("mystory.txt", "wt");
    
    fputs("#이름 : 홍길동\n", fp);
    fputs("#주민번호 : 900711-1234567\n", fp);
    fputs("#전화번호 : 010-1111-2222\n", fp);
    fclose(fp);
    return 0;
}