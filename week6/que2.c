/*
2022204080 �̱���
enum�� yoil�� ������ �� sun�� ���
*/

#include <stdio.h>

typedef enum {
    sun = 1, mon, tue, wed, thu, fri, sat = 7
} yoil;

int main() {
    yoil yo; 
    printf("SUN : %d\n", sun);
    printf("MON : %d\n", mon);
    printf("TUE : %d\n", tue);
    printf("WED : %d\n", wed);
    printf("THU : %d\n", thu);
    printf("FRI : %d\n", fri);
    printf("SAT : %d\n", sat);
    return 0;
}