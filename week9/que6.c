#include <stdio.h>

int main() {
    FILE * fp = fopen("readme.txt", "r");
    FILE * fp2 = fopen("readyou.txt", "w");
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