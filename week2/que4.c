#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int result = 1;
    printf("�ܾ �Է��ϼ��� : ");
    scanf("%s", str);
    int last = strlen(str)-1;
    for (int i = 0; i < strlen(str)/2; ++i) {
        if (str[i] != str[last]) result = 0;
        --last;
    }
    printf(result ? "ȸ���Դϴ�" : "ȸ���� �ƴմϴ�");
    return 0;
}