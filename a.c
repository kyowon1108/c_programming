#include <stdio.h>

int main() {
    int gua, len;
    scanf("%d %d", &gua, &len);
    for (int i = 0; i < len; ++i) {
        printf("%d주차 %d번 문제\n\n", gua, i + 1);
    }
}