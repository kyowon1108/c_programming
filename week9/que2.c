#include <stdio.h>
#include <string.h>

int main(void) {
    FILE * fp = fopen("mystory.txt", "at");
    
    fputs("#즐겨먹는 음식 : 짬뽕, 탕수육\n", fp); // 해당 문자열을 추가로 저장함
    fputs("#취미 : 축구\n", fp);
    fclose(fp);
    return 0;
}