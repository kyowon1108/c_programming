#include <stdio.h>

// char * StrCpy(char * str, const char * input) {
//     char *a = str;
//     while ((*str++ == *input++) != 0){}
//     return a;
// }

char *StrCpy(char *str, const char *src)
{
    char *a;
    for (a = str; *str++ = *src++;);
    return a;
}

int main() {
    char string[100];

    strcpy(string, "C 언어 길라잡이");
    puts(string);
    
    StrCpy(string, "정보문화사");
    puts(string);

    return 0;
}