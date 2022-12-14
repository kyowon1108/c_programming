/*
2022204080 이교원
0, 4, 9번 인덱스에서 int를 뽑아내 hour, min, sec에 저장함
mktime한 후 시간을 빼 time을 계산함
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
    char strTime1[] = "9시 30분 21초";
    char strTime2[] = "9시 35분 30초";

    struct tm t;
    time_t time1, time2;

    tzset();

    t.tm_year = 70;
    t.tm_mon = 0;
    t.tm_mday = 1;
    t.tm_hour = atoi(&strTime1[0]);
    t.tm_min = atoi(&strTime1[4]);
    t.tm_sec = atoi(&strTime1[9]);

    time1 = mktime(&t);

    t.tm_hour = atoi(&strTime2[0]);
    t.tm_min = atoi(&strTime2[4]);
    t.tm_sec = atoi(&strTime2[9]);

    time2 = mktime(&t);

    time2 -= time1;

    t = *gmtime(&time2);

    printf("%02d:%02d:%02d \n", t.tm_hour, t.tm_min, t.tm_sec);
    return 0;
}