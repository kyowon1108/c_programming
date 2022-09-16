#include <stdio.h>

int add(int num[], int len) {
    int res = 0;
    for (int i = 0; i < len; ++i) {
        res += *num++;
    }
    return res;
}

int main() {
    int a[5] = { 200, 300, 500, 200, 400 };
    printf("직원들의 월급의 합 : %d", add(a, 5));
    return 0;
}