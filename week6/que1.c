/*
2022204080 �̱���
struct�� ASDF�� union�� QWER�� ��⸦ ������
*/

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
    printf("%d\n%d", sizeof(ASDF), sizeof(QWER));
    return 0;    
}