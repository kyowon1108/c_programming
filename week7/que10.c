/*
2022204080 이교원
strtok을 사용해 (, ), -을 구분해 분리함
*/

#include <stdio.h>
#include <string.h>

int main() {
    char res[20] = {0};
    char string[20];
    strcpy(string, "(111)-(222)-(333)");

    char * ptr;
    ptr = strtok(string, "()-");

    while (ptr) {
        printf("%s\n", ptr);
        strcat(res, ptr);
        ptr = strtok(NULL, "()-");
    }
    printf("%s", res);
}