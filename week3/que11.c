#include <stdio.h>
#include <string.h>

int check_name(char name, int len) {

}

int input_name(char name[10][20]) {
    int i = 0;
    while (i < 10) {
        printf("> 이름 : ");
        char a[20];
        scanf("%s", a);
        for (int j = 0; j < i; ++j) {
            if (!strcmp(a, *name++))
                printf("@ 이름이 이미 등록되었습니다.");
                break;
        }
        name[i] = a;
        printf("asdf");
        ++i;
    }
}

void print_name() {

}

int main() {
    char name[10][20];
    int cnt;

    cnt = input_name(name);
    //print_name(name, cnt);

    return 0;
}