#include <stdio.h>

int main() {
    while (1) {
        int input[3];
        scanf("%d %d %d", input, &input[1], &input[2]);
        int max = 0;
        int a = 0;

        for (int i = 0; i < 3; ++i) {
            if (input[i] > max) max = input[i];
        }
        for (int j = 0; j < 3; ++j) {
            if (input[j] != max) a += input[j] * input[j];
        }
        max *= max;
        if(max == a) printf("right\n");
        else printf("wrong\n");
    }
    return 0;

}