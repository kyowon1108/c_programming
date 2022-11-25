#include <stdio.h>
#include <string.h>

int main() {
    FILE * fp = fopen("que10.c", "rt");

    char str[100];
    int max = 0, total = 0;
    char max_str[100];
    while (fscanf(fp, "%s", str) != EOF) {
        char * ptr = strtok(str, " "); //strtok을 통해 띄어쓰기를 기준으로 나눔

        while (ptr != NULL) {
            if (strlen(ptr) >= max) {
                strcpy(max_str, ptr); // ptr의 크기가 max보다 클 경우에 max_str에 ptr을 집어넣음
            }
            total += strlen(ptr);
            ptr = strtok(NULL, " ");
        }
    }
    printf("문장 길이 : %d, 제일 긴 단어 : %s", total, max_str);
}