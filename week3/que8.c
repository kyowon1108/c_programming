/*
2022204080 �̱���
arr�� i��° �׿� ������ �Է¹��� ( 5�� )
strlen�� ���� i��° �̸��� ���̸� ��
*/

#include <stdio.h>
#include <string.h>

int main() {
    char arr[5][19];
    int index, len = 0;
    printf("5���� ���� �̸� �Է� : ");
    for (int i = 0; i < 5; ++i) {
        scanf("%s", arr[i]);
        if (strlen(arr[i]) > len) {
            index = i, len = strlen(arr[i]);
        }
    }
    
    printf("���̰� ���� �� ���� �̸��� %s�Դϴ�.", arr[index]);
    return 0;
}