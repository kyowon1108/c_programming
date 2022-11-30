/*
2022204080 이교원
*/

#include <stdio.h>
#define FILENAME_LEN 50

int main() {
    FILE * fp1, * fp2;
    char fname1[FILENAME_LEN], fname2[FILENAME_LEN];
    
    printf("첫번째 파일이름 : ");
    gets(fname1);
    fp1 = fopen(fname1, "wt");
    printf("첫번째 파일 내용 입력(종료는 Ctrl + z) : \n");
    char ch;
    while ((ch = getchar() != EOF)) {
        fputc(ch, fp1);
    }

    printf("두번째 파일이름 : ");
    gets(fname2);
    fp2 = fopen(fname2, "wt");
    printf("두번째 파일 내용 입력(종료는 Ctrl + z) : \n");
    while ((ch = getchar() != EOF)) {
        fputc(ch, fp2);
    }

    fclose(fp1), fclose(fp2);

    fp1 = fopen(fname1, "rt");
    fp2 = fopen(fname2, "rt");
    if (fp1 == NULL || fp2 == NULL) {
        printf("file error");
        return -1;
    }
    int n = 0;
    while(!feof(fp1)) {
        ++n;
        char ch1, ch2;

        ch1 = fgetc(fp1), ch2 = fgetc(fp2);
        if (ch1 == EOF || ch2 == EOF) break;

        if (ch1 == '\n') ch1 = ' ';
        if (ch2 == '\n') ch2 == ' ';

        printf("%d : %c %c\n", n, ch1, ch2);
        if (ch1 != ch2) {
            printf("%d번째에서 %c, %c 다름\n", n, ch1, ch2);
            break;
        }
    }
    fclose(fp1), fclose(fp2);
    return 0;
}