#include <stdio.h>
#include <string.h>

int main() {
    FILE * fp = fopen("que10.c");

    char str[100];
    int max = 0, total = 0;
    char max_str[100];
    while (fscanf(fp, "%s", str) != EOF) {
        char * ptr = strtok(str, " ");

        while (ptr != NULL) {
            if (strlen(ptr) >= max) {
                strcpy(max_str, ptr);
            }
            total += strlen(ptr);
            ptr = strtok(NULL, " ");
        }
    }
    printf("문장 길이 : %d, 제일 긴 단어 : %s", total, max_str);
}