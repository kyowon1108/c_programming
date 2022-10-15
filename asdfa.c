#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>

void SetPosition(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.X = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void SetString(int x, int y, char * str) {
    SetPosition(x, y);
    puts(str);
    Sleep(100);
    system("cls");
}

int main() {
    int i = 0;
    char * str = "Hello World!";
    while (!kbhit()) {
        for(i = 0; i < 50; ++i)
            SetString(i, i, str);
        for(i = 50; i >= 0; --i)
            SetString(i, i, str);
    }

    printf("Bye!\n\n");
    return 0;
}