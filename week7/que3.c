#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("문자열 입력 : ");
    scanf("%s", str);

    int len = strlen(str);
    int check = 1;
    for (int i = 0; i < len / 2 ; ++i) {
        if (str[i] != str[len - i - 1]) { // i번째 항과 len - i - 1번째 항이 같지 않으면 회문이 아님.
            printf("회문이 아닙니다.");
            check = 0;
            break;
        }
    }
    if (check == 1) printf("회문입니다.");
    return 0;
}