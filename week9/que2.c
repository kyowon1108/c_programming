#include <stdio.h>
#include <string.h>

int main(void) {
    FILE * fp = fopen("mystory.txt", "at");
    
    fputs("#��ܸԴ� ���� : «��, ������\n", fp); // �ش� ���ڿ��� �߰��� ������
    fputs("#��� : �౸\n", fp);
    fclose(fp);
    return 0;
}