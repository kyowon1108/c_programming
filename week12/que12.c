/*
2022204080 ÀÌ±³¿ø
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char temp[100][1000];

int main() {
    char arr[1000];

    char input[1000];
    scanf("%s", input);

    int top = 0, top2 = 0;
    for (int i = 0; i < strlen(input); ++i) {
        if (input[i] == '(') {
            char asdf[1000];
            int j = 0;
            for (; input[i] != ')'; ++i) {
                asdf[j] = input[i];
                ++j;
            }
            asdf[j] = ')';

            for (int k = 0; k < strlen(asdf); ++k) {
                temp[top2][k] = asdf[k];
            }
            arr[top++] = '*';
            top2++;
        } else {
            arr[top++] = input[i];
        }
    }

    while (top--) {
        if (arr[top] == '*') {
            top2--;
            for (int i = 0; temp[top2][i] != -52; ++i) {
                printf("%c", temp[top2][i]);
            }
        } else {
            printf("%c", arr[top]);
        }
    }
}