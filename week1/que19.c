#include <stdio.h>

int main() {
    int age;
    printf("���̸� �Է��ϼ��� : ");
    scanf("%d", &age);
    if (age <= 6 || age >= 60) { // ���̰� 6�� �����̰ų� 60�� �̻��̸� TRUE
        printf("�����Դϴ�.");
    } else {
        printf("1000���Դϴ�.");
    }
    return 0;
}