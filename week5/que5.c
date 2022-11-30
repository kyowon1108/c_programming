/*
2022204080 이교원
strtok을 사용해 /와 :를 구분해 str을 분리해 year, mon 등에 넣음
year은 1900년부터 시작하기 때문에 1900을 빼주었음
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
    char str[] = "2006/05/15 09:05:07";

    char* token;
    struct tm t;
    time_t time;


    int date[6];
    int i = 0;
    char *ptr = strtok(str, "/: ");
    while (ptr != NULL) {
        date[i++] = atoi(ptr);
        ptr = strtok(NULL, "/: ");
    }
    t.tm_year = date[0] - 1900;
    t.tm_mon = date[1] - 1;
    t.tm_mday = date[2];
    t.tm_hour = date[3];
    t.tm_min = date[4];
    t.tm_sec = date[5];
    time = mktime(&t);

    printf("%4d/%02d/%02d %02d:%02d:%02d \n", t.tm_year+1900, t.tm_mon+1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);
    return 0;
}