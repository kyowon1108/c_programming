#include <stdio.h>

typedef struct asdf {
    int a;
    double b;
} ASDF;

typedef union qwer {
    int a;
    double b;
} QWER;

int main() {
    printf("%d\n%d", sizeof(ASDF), sizeof(QWER)); // struct인 ASDF와 union인 QWER의 쿠기를 측정함
    return 0;    
}