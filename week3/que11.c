/*
2022204080 이교원
check_name : strcmp를 사용해 name이 일치하다면 1를 리턴함
그렇지 않다면 0을 리턴함
*/

#include <stdio.h>
#include <string.h>

int check_name(char (*name)[20], char * check, int len) {
    for (int i = 0; i < len; ++i) {
        if (!strcmp(name[i], check)) return 1;
    }
    return 0; 
}

int input_name(char (*name)[20]) {
    int i = 0;
    while (i < 10) {
        printf("> 이름 : ");
        char a[20];
        scanf("%s", a);
        if(!strcmp(a, "end")) break;
        if (check_name(name, a, i)) {
            printf("@ 이름이 이미 등록되었습니다.\n");
            continue;
        }
        strcpy(name[i], a);
        ++i;
    }
    return i;
}

void print_name(char (*name)[20], int cnt) {
    printf("@ 총 %d명이 입력되었습니다.\n", cnt);
    for (int i = 0; i < cnt; ++i) {
        printf("%s\n", name[i]);
    }
}

int main() {
    char name[10][20];
    int cnt;

    cnt = input_name(name);
    print_name(name, cnt);

    return 0;
}