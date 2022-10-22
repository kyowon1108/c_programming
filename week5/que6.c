#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
    char str[] = "20060515090507";

    struct tm t;
    time_t time;

    int date[6];
    int i = 0;
    char *ptr = strtok(str, "/: ");
    
    t.tm_year =  - 1900;
    t.tm_mon = date[1] - 1;
    t.tm_mday = date[2];
    t.tm_hour = date[3];
    t.tm_min = date[4];
    t.tm_sec = date[5];
    time = mktime(&t);

    printf("%4d/%02d/%02d %02d:%02d:%02d \n", t.tm_year+1900, t.tm_mon+1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);
    return 0;
}