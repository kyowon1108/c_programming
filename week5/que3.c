#include <stdio.h>

void print_menu() {
    printf("    [ 메뉴 ]    \n");
    printf("=================\n");
    printf("1. 친구 추가\n");
    printf("2. 친구 목록 보기\n");
    printf("3. 종료\n");
    printf("=================\n");
    printf("번호 선택 : ");
}

void add_friend(char *name, int age, double height, double weight, int num) {
    printf("\n새로운 친구 정보를 입력하세요.\n");
    printf("이름 : ");
    scanf("%s", *(name + num));
    printf("나이 : ");
    scanf("%d", (age + num));
    printf("키 : ");
    scanf("%lf", (height + num));
    printf("몸무게 : ");
    scanf("%lf", (weight + num));
    printf("입력을 완료했습니다.\n\n");
}

void print_friend (char *name, int age, double height, double weight, int check) {
    printf("\n등록된 친구 목록\n");
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
                printf("친구는 최대 5명까지 입력이 가능합니다.\n\n");
                continue;
            }
            add_friend(name, age, height, weight, check++);
        
        }
        else if (func == 2) {
            if (check == 0) {
                printf("등록된 친구가 없습니다.\n\n");
                continue;
            }
           print_friend(name, age, height, weight, check);
        }
        else if (func == 3) break;
        else {
            printf("올바른 번호를 입력해주세요.\n\n");
            continue;
        }
    }
    return 0;
}