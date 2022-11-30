/*
2022204080 �̱���
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char stack[100];
int top = 0;

int main() {
    int len;
    scanf("%d", &len);
    // �ݺ��� Ƚ�� �Է�
    for (int i = 0; i < len; ++i) {
        char str;
        scanf("%c", &str); // ���ڿ� �Է¹���
        getchar();
        if (str == '0') { // ���� �Է¹��� ���ڿ��� '0'�̸�
            if (top <= 0) continue; // top�� 0�� ��� �ѱ��
            stack[top--] = 0; // top -1 �ϰ� pop stack
        } else stack[top++] = str; // push stack
        
    }

    if (!top) printf("YES"); // top�� 0�̸� yes �ƴϸ� no
    else printf("NO");
}