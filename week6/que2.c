#include <stdio.h>

typedef enum {
    sun = 1, mon, tue, wed, thu, fri, sat = 7
} yoil;

int main() {
    yoil yo; // enum�� yoil�� ������
    printf("SUN : %d\n", sun);
    return 0;
}