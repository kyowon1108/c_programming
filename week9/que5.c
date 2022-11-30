/*
2022204080 이교원
arr의 숫자들을 줄바꿈해 저장함
마지막에 00xxx의 형태로 나오게 출력함
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE * fp = fopen("a.txt", "wt");
    int arr[5] = {123, 456, 789, 234, 251};
    for (int i = 0; i < 5; ++i) {
        fprintf(fp, "%d\n", arr[i]);
    }
    fclose(fp);

    FILE * fp2 = fopen("a.txt", "rt");
    int arr2[5];
    for (int i = 0; i < 5; ++i) {
        fscanf(fp2, "%d", &arr2[i]);
        printf("%05d\n", arr2[i]);
    }
    return 0;
};