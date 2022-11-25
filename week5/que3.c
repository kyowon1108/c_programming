#include <stdio.h>

void print_menu() {
    printf("    [ �޴� ]    \n");
    printf("=================\n");
    printf("1. ģ�� �߰�\n");
    printf("2. ģ�� ��� ����\n");
    printf("3. ����\n");
    printf("=================\n");
    printf("��ȣ ���� : ");
}

void add_friend(char *name, int age, double height, double weight, int num) {
    printf("\n���ο� ģ�� ������ �Է��ϼ���.\n");
    printf("�̸� : ");
    scanf("%s", *(name + num));
    printf("���� : ");
    scanf("%d", (age + num));
    printf("Ű : ");
    scanf("%lf", (height + num));
    printf("������ : ");
    scanf("%lf", (weight + num));
    printf("�Է��� �Ϸ��߽��ϴ�.\n\n");
}

void print_friend (char *name, int age, double height, double weight, int check) {
    printf("\n��ϵ� ģ�� ���\n");
    printf("===================================\n");
    for (int i = 0; i < check; ++i) {
        printf("%s    ,  %4d, %6.2f, %6.2f\n", *(name + i), *(age + i), *(height + i), *(weight + i));
    }
    printf("===================================\n\n");
}

int main() {
    char name[5][20];
    int age[5];
    double height[5];
    double weight[5];
    int check = 0;
    int func;

    while (1) {
        print_menu();
        scanf("%d", &func);
        if (func == 1) {
            if (check == 5) {
                printf("ģ���� �ִ� 5����� �Է��� �����մϴ�.\n\n");
                continue;
            }
            add_friend(name, age, height, weight, check++);
        
        }
        else if (func == 2) {
            if (check == 0) {
                printf("��ϵ� ģ���� �����ϴ�.\n\n");
                continue;
            }
           print_friend(name, age, height, weight, check);
        }
        else if (func == 3) break;
        else {
            printf("�ùٸ� ��ȣ�� �Է����ּ���.\n\n");
            continue;
        }
    }
    return 0;
}