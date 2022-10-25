#include <stdio.h>
#include <string.h>

void main(void) {
    char string[100];

    strcpy(string, "String.");
    int strl = strlen(string);

    for (int i = 0; i < strl; ++i) {
        char ch = string[0];
        strcpy(string, string + 1);
        string[strl - 1] = ch;
        printf("[%d] %s\n", i, string);
    }
}// 답지랑 비교하면서 코드 이해