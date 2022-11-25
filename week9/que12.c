#include <stdio.h>

char * gets_f(char * buffer) { // gets의 역할을 하는 함수임
    int i;
    for (i = 0; i < 63; ++i) {
        buffer[i] = fgetc(stdin);
        if (buffer[i] == '\n') break;
    }
    buffer[i] = 0;

    return buffer;
}

int puts_f(const char * string) { // puts의 역할을 하는 함수임
    for (int i = 0; i < 63; ++i) {
        fputc(string[i], stdout);
        if (string[i] == 0) break;
    }
    puts(""); //줄바꿈을 위함
    return 0;
}

int main() {
    char str[64];
    gets_f(str);
    puts_f(str);

    return 0;
}