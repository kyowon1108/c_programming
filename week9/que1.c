#include <stdio.h>
#include <string.h>

int main(void) {
    FILE * fp = fopen("mystory.txt", "wt");
    
    fputs("#�̸� : ȫ�浿\n", fp);
    fputs("#�ֹι�ȣ : 900711-1234567\n", fp);
    fputs("#��ȭ��ȣ : 010-1111-2222\n", fp);
    fclose(fp);
    return 0;
}