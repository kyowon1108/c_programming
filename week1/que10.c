/*
2022204080 이교원
1부터 num까지의 합 공식을 사용함
*/

#include <stdio.h>

int sum(int num) {
    return (num * (num + 1)) / 2;
}    
int main() {
    int re = 0;
    for (int i = 1; i <= 10; ++i) {
        re += sum(i); 
    }
    printf("1 + (1 + 2) + (1 + 2 + 3) + ... + (1 + 2 + 3 + ... + 9 + 10) = %d", re);
    return 0;
}