#include <stdio.h>
#include <string.h>

int main(void) {
    FILE * fp = fopen("mystory.txt", "rt"); // mystory.txt�� ������ ���ڿ��� �� ������ �ҷ���
    char str[1024]; // str�� ������ �����
    while (feof(fp) == 0) {
        fgets(str, sizeof(str), fp);
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}