#include <stdio.h>

char * gets_f(char * buffer) {
    int i;
    for (i = 0; i < 63; ++i) {
        buffer[i] = fgetc(stdin);
        if (buffer[i] == '\n') break;
    }
    buffer[i] = 0;

    return buffer;
}

int puts_f(const char * string) {
    for (int i = 0; i < 63; ++i) {
        fputc(string[i], stdout);
        if (string[i] == 0) break;
    }
    puts("");
    return 0;
}

int main() {
    char str[64];
    gets_f(str);
    puts_f(str);

    return 0;
}