#include <stdio.h>

typedef enum yoil {
    sun = 1, mon, tue, wed, thu, fri, sat = 7
};

int main() {
    yoil yo;
    printf("SUN : %d\n", sun);
    return 0;

}

// enum, struct, union