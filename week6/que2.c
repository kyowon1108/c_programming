#include <stdio.h>

typedef enum {
    sun = 1, mon, tue, wed, thu, fri, sat = 7
} yoil;

int main() {
    yoil yo; // enum인 yoil을 정의함
    printf("SUN : %d\n", sun);
    return 0;
}