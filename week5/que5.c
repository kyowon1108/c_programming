#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    char str[] = "2006/05/15 09:05:07";

    char* token;
    struct tm t;
    time_t time;

    int date[6];
    int i = 0;
    char *ptr = strtok(str, "/: ");
    while (ptr != NULL) {
        date[i++] = *ptr;
        ptr = strtok(NULL, "/: ");
    }
    t.tm_year = date[0] - 1900;
    t.tm_mon = date[1] - 1;
    t.tm_mday = date[2];
    t.tm_hour = date[3];
    t.tm_min = date[4];
    t.tm_sec = date[5];
    time = mktime(t);

    return 0;
}