#include <stdio.h>

struct info {
    char name[20];
    int age;
    double height;
    double weight;
};

int main() {
    struct info a;
    printf("������� ������ �Է��ϼ���\n");
    printf("�̸� : ");
    scanf("%s", a.name);
    printf("���� : ");
    scanf("%d", &a.age);
    printf("Ű : ");
    scanf("%lf", &a.height);
    printf("������ : ");
    scanf("%lf", &a.weight);

    printf("�Է��� ������ ������ �����ϴ�.\n");
    printf("%s : %d��, %.1fcm, %.1fkg", a.name, a.age, a.height, a.weight);

    return 0;
}