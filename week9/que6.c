/*
2022204080 이교원
만약 대문자이면 소문자로 바꿔서 출력함
*/

#include <stdio.h>

int main() {
    FILE * fp = fopen("readme.txt", "rt");
    FILE * fp2 = fopen("readyou.txt", "wt");
    char str[100];

    while (fgets(str, sizeof(str), fp)) {
        for (int i = 0; i < 100; ++i) {
            if (str[i] >= 'A' || str[i] <= 'Z') str[i] += 'Z' - 'A';
        }
        printf("%s", str);
        fputs(str, fp2);
    }
    return 0;
}