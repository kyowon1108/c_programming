#include <stdio.h>
#include <string.h>

void main(void) {
    char string[100], str[100];
    printf("���� �Է� ");
    gets(string);

    while (1) {
        printf("�̻��� ���ڿ� �Է� (����� end) : ");
        scanf("%s", str);
        if (!strcmp(str, "end")) break;

        int len = 0;
        int stringlen = strlen(string);
        int scanlen = strlen(str);

        int i;
        for (i = 0; i < stringlen; ++i) {
            int check = 1;
            for (int j = 0; j < scanlen; ++j) {
                if (string[i + j] != str[j]) check = 0;
            }
            if (check == 1) {
                ++len;
                i += scanlen - 1;
            }
        }
        printf("�˻� ��� : %d��", len);
    }
}// �������� strncnp�� ��