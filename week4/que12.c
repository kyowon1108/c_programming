#include <stdio.h>
#include <string.h>

void main(void) {
    char string[100];

    strcpy(string, "String.");
    int strl = strlen(string);

    for (int i = 0; i < strl; ++i) {
        char ch = string[strl - 1];// ch는 string의 가장 마지막 글자
        for (int j = strl - 1; j > 0; --j) {
            printf("%d > %c, %c\n", j, string[j], string[j - 1]);
            string[j] = string[j - 1]; // 글자를 한칸씩 뒤로 미룸
        }
        string[0] = ch;// 마지막 글자를 0번째 인덱스로 가지고 옴
        printf("[%d] %s \n", i, string);
    }
}