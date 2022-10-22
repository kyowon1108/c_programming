#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
    char strTime1[] = "9시 30분 21초";
    char strTime2[] = "9시 35분 30초";

    struct tm t;
    time_t time1, time2;

    

    printf("%02d:%02d:%02d \n", t.tm_hour, t.tm_min, t.tm_sec);
    return 0;
}