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
    printf("%d\n%d", sizeof(ASDF), sizeof(QWER)); // struct�� ASDF�� union�� QWER�� ��⸦ ������
    return 0;    
}