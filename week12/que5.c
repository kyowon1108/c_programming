/*
2022204080 ÀÌ±³¿ø
*/

#include <stdio.h>
#include <string.h>

int main() {
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) {
        char text[100];
        scanf("%s", text);
        int count = 0;
        for (int j = 0; j < strlen(text); ++j) {
            if (text[j] == '(') ++count;
            else if (text[j] == ')') --count;
            if (count < 0) { printf("NO\n"); break; }
        }
        if (count == 0) printf("YES\n");
        else if (count > 0) printf("NO\n");
    }
    return 0;
}