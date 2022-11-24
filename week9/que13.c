#include <stdio.h>
#include <string.h>

long GetFileSize(FILE * fp) {
    long fpos;
    long fsize;

    fpos = ftell(fp);

    fseek(fp, 0, SEEK_END);
    fsize = ftell(fp);

    fseek(fp, fpos, SEEK_SET);

    return fsize;
}

int main() {
    char str[100];
    FILE * fp = fopen("que13.txt", "r");

    printf("������ ũ�� : %ld ����Ʈ\n", GetFileSize(fp));

    return 0;
}