/*
2022204080 이교원
enum인 yoil을 정의한 후 sun을 출력
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