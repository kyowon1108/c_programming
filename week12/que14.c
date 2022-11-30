/*
2022204080 ÀÌ±³¿ø
*/

#include <stdio.h>
#include <string.h>

char origin[100000], stack[100000], ex[37];

int main() {
    int sindex, exlen, tempi, tempj;
    int issame;
    scanf("%s%s", origin, ex);
    exlen = strlen(ex) - 1;

    for (int i = sindex = 0; origin[i]; ++i) {
        stack[sindex++] = origin[i];
        if (stack[sindex - 1] == ex[exlen]) {
            issame = 1;
            for (int j = exlen, tempj = 1; j >= 0; --j) {
                if (sindex < exlen + 1 || ex[j] != stack[sindex- tempj++]) {
                    issame = 0;
                    break;
                }
            }
            if (issame) stack[sindex -= exlen + 1] = 0;
        }
        if (stack[sindex - 1] == ex[exlen]) {
            issame = 1;
            for (int j = exlen, tempj = 1; j >= 0; --j) {
                if (sindex - 1 < exlen || ex[j] != stack[sindex - tempj++]) {
                    issame = 0;
                    break;
                }
            }
            if (issame) stack[sindex -= exlen + 1] = 0;
        }
        stack[sindex] = 0;
        puts(stack[0] == 0 ? "end" : stack);
        return 0;
    }
}