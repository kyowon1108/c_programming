#include <stdio.h>
#include <string.h>

int main() {
    char arr[10][20];
    int i = 0;
    while (i < 10) {
        printf("> �ܾ� �Է� : ");
        scanf("%s", arr[i]);
        if (!strcmp(arr[i], "end")) {
            printf("# �� %d���� �ܾ �ԷµǾ����ϴ�!\n\n", i);
            break;
        }
        ++i;
    }
    
    while(1) {
        char check[20];
        printf("> �˻� �ܾ� (����� end �Է�) : ");
        scanf("%s", check);
        if (!strcmp(check, "end")) break; // strcmp�� ����� end�� �Է¹��� ��� while������ ��������
        for(int k = 0; k < 10; ++k) {
            if (!strcmp(check, arr[k])) { // strcmp�� ����� arr�� k��°�� �ִ� ���� ��ġ���� Ȯ����
                printf("# %d��° ���� �ܾ �ֽ��ϴ�!\n\n", k + 1);
                break;
            }
        }
    }
    return 0;
}