/*
2022204080 이교원
string과 str을 하나씩 비교해가면서 만약 같지 않은 글자가 발견되면 check을 0으로 설정, 아니면 1로 유지
그렇게 해서 string의 len * scan한 str의 len을 한만큼의 for문을 돌려 얼마나 있는지 찾아내 len에 저장
*/

#include <stdio.h>
#include <string.h>

void main(void) {
    char string[100], str[100];
    printf("문장 입력 ");
    gets(string);

    while (1) {
        printf("겁색할 문자열 입력 (종료는 end) : ");
        scanf("%s", str);
        if (!strcmp(str, "end")) break;

        int len = 0;
        int stringlen = strlen(string);
        int scanlen = strlen(str);

        int i;
        for (i = 0; i < stringlen; ++i) {
            int check = 1;
            for (int j = 0; j < scanlen; ++j) {
                if (string[i + j] != str[j]) check = 0;
            }
            if (check == 1) {
                ++len;
                i += scanlen - 1;
            }
        }
        printf("검색 결과 : %d개", len);
    }
}