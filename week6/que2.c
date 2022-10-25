#include <stdio.h>

typedef enum yoil {
    SUN = 1, MON, TUE, WED, THU, FRI, SAT
} Yoill;

void printYoil (Yoill yo) {
    switch (yo) {
        case SUN:
            puts("SUN : 1"); break;
        case MON:
            puts("MON : 2"); break;
        case TUE:
            puts("TUE : 3"); break;
        case WED:
            puts("WED : 4"); break;
        case THU:
            puts("THU : 5"); break;
        case FRI:
            puts("FRI : 6"); break;    
        case SAT:
            puts("SAT : 7"); break;      
    }
}

int main() {
    Yoill yo;
    for (yo = SUN; yo <= SAT; yo++) {
        printYoil(yo);
    }
    return 0;

}