/*
2022204080 �̱���
����ü�� ����� info �ȿ� name, age, height, weight�� ������
�Ϲ����� �迭�� �����ϴ� �Ͱ��� �޸� �����ϱⰡ �ſ� ����
*/

#include <stdio.h>

struct info {
    char name[20];
    int age;
    double height;
    double weight;
};
void print_menu() {
    printf("    [ �޴� ]    \n");
    printf("=================\n");
    printf("1. ģ�� �߰�\n");
    printf("2. ģ�� ��� ����\n");
    printf("3. ����\n");
    printf("=================\n");
    printf("��ȣ ���� : ");
}

void add_friend(struct info * arr, int num) {
    printf("\n���ο� ģ�� ������ �Է��ϼ���.\n");
    printf("�̸� : ");
    scanf("%s", arr[num].name);
    printf("���� : ");
    scanf("%d", &(arr[num].age));
    printf("Ű : ");
    scanf("%lf", &(arr[num].height));
    printf("������ : ");
    scanf("%lf", &(arr[num].weight));
    printf("�Է��� �Ϸ��߽��ϴ�.\n\n");
}

void print_friend (struct info * arr, int check) {
    printf("\n��ϵ� ģ�� ���\n");
    printf("===================================\n");
    for (int i = 0; i < check; ++i) {
        printf("%s    ,  %4d, %6.2f, %6.2f\n", arr[i].name, arr[i].age, arr[i].height, arr[i].weight);
    }
    printf("===================================\n\n");
}

int main() {
    struct info arr[5];
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
            add_friend(arr, check++);
        
        }
        else if (func == 2) {
            if (check == 0) {
                printf("��ϵ� ģ���� �����ϴ�.\n\n");
                continue;
            }
            print_friend(arr, check);
        }
        else if (func == 3) break;
        else {
            printf("�ùٸ� ��ȣ�� �Է����ּ���.\n\n");
            continue;
        }
    }
    return 0;
}