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