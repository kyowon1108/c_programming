#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("���ڿ� �Է� : ");
    scanf("%s", str);

    int len = strlen(str);
    int check = 1;
    for (int i = 0; i < len / 2 ; ++i) {
        if (str[i] != str[len - i - 1]) { // i��° �װ� len - i - 1��° ���� ���� ������ ȸ���� �ƴ�.
            printf("ȸ���� �ƴմϴ�.");
            check = 0;
            break;
        }
    }
    if (check == 1) printf("ȸ���Դϴ�.");
    return 0;
}