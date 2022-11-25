#include <stdio.h>

int main() {
    FILE * fp = fopen("number.txt", "rt");
    double num = 0;
    double total = 0;

    while (fscanf(fp, "%lf", &num) != EOF) {
        printf("%.2lf\n", num); // double 형태의 숫자를 불러와 total에 추가함
        total += num;
    }
    printf("%.2lf", total);
    fclose(fp);
    return 0;
}