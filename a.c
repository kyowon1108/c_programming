#include <stdio.h>

int main() {
    int gua, len;
    scanf("%d %d", &gua, &len);
    for (int i = 0; i < len; ++i) {
        printf("%d���� %d�� ����\n\n", gua, i + 1);
    }
}