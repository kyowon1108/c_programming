#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    FILE * fp = fopen("mystory.txt", "rt");
    char str[1024];

    char a[20];
    printf("찾으실 정보를 입력하세요 : ");
    scanf("%s", a);
    printf("%s\n", a);
    while (feof(fp) == 0) {
        fgets(str, sizeof(str), fp);
        printf("%s", str);
        if(!strcmp(str, a)) { // 찾는 문자열과 일치하는지 strcmp를 사용해 구분함
            printf("문자열을 찾았습니다.\n");
            printf("%s", str);
        }
    }
    fclose(fp);
    return 0;
}