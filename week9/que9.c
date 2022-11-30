/*
2022204080 이교원
strtok을 통해 띄어쓰기를 기준으로 나눔
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE * fp = fopen("que9.c", "rt");
    char str[100];

    while (fscanf(fp, "%s", str) != EOF) {
        char * ptr;
        ptr = strtok(str, " ");
        while (ptr != NULL) {
            printf("%s\n", ptr);
            ptr = strtok(NULL, " ");
        }
    }
    return 0;
}