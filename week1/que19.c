/*
2022204080 �̱���
���̰� 6�� �����̰ų� 60�� �̻��̸� TRUE

*/

#include <stdio.h>

int main() {
    int age;
    printf("���̸� �Է��ϼ��� : ");
    scanf("%d", &age);
    if (age <= 6 || age >= 60) {
        printf("�����Դϴ�.");
    } else {
        printf("1000���Դϴ�.");
    }
    return 0;
}