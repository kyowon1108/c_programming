/*
2022204080 이교원
구분할 수 있는 인자가 없기 때문에 몇번 인덱스에 있는지에 따라 문자열을 자름
각각 12, 10, 8, 6, 4, 0번 인덱스를 기준으로 자르면 됨
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
    char str[] = "20060515090507";

    struct tm t;
    time_t time;

    t.tm_sec = atoi(&str[12]);
    str[12] = 0;
    t.tm_min = atoi(&str[10]);
    str[10] = 0;
    t.tm_hour = atoi(&str[8]);
    str[8] = 0;
    t.tm_mday = atoi(&str[6]);
    str[6] = 0;
    t.tm_mon = atoi(&str[4]) - 1;
    str[4] = 0;
    t.tm_year = atoi(&str[0]) - 1900;

    time = mktime(&t);

    printf("%4d/%02d/%02d %02d:%02d:%02d \n", t.tm_year+1900, t.tm_mon+1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);
    return 0;
}