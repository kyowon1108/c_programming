/*
2022204080 �̱���
check_name : strcmp�� ����� name�� ��ġ�ϴٸ� 1�� ������
�׷��� �ʴٸ� 0�� ������
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
        printf("> �̸� : ");
        char a[20];
        scanf("%s", a);
        if(!strcmp(a, "end")) break;
        if (check_name(name, a, i)) {
            printf("@ �̸��� �̹� ��ϵǾ����ϴ�.\n");
            continue;
        }
        strcpy(name[i], a);
        ++i;
    }
    return i;
}

void print_name(char (*name)[20], int cnt) {
    printf("@ �� %d���� �ԷµǾ����ϴ�.\n", cnt);
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