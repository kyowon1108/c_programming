#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
    char strTime1[] = "9�� 30�� 21��";
    char strTime2[] = "9�� 35�� 30��";

    struct tm t;
    time_t time1, time2;

    

    printf("%02d:%02d:%02d \n", t.tm_hour, t.tm_min, t.tm_sec);
    return 0;
}