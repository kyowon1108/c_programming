#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    FILE * fp = fopen("mystory.txt", "rt");
    char str[1024];

    char a[20];
    printf("ã���� ������ �Է��ϼ��� : ");
    scanf("%s", a);
    printf("%s\n", a);
    while (feof(fp) == 0) {
        fgets(str, sizeof(str), fp);
        printf("%s", str);
        if(!strcmp(str, a)) { // ã�� ���ڿ��� ��ġ�ϴ��� strcmp�� ����� ������
            printf("���ڿ��� ã�ҽ��ϴ�.\n");
            printf("%s", str);
        }
    }
    fclose(fp);
    return 0;
}