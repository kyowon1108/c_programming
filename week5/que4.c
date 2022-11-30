/*
2022204080 이교원
구조체를 사용해 info 안에 name, age, height, weight를 저장함
일반적인 배열로 저장하는 것과는 달리 관리하기가 매우 편함
*/

#include <stdio.h>

struct info {
    char name[20];
    int age;
    double height;
    double weight;
};
void print_menu() {
    printf("    [ 메뉴 ]    \n");
    printf("=================\n");
    printf("1. 친구 추가\n");
    printf("2. 친구 목록 보기\n");
    printf("3. 종료\n");
    printf("=================\n");
    printf("번호 선택 : ");
}

void add_friend(struct info * arr, int num) {
    printf("\n새로운 친구 정보를 입력하세요.\n");
    printf("이름 : ");
    scanf("%s", arr[num].name);
    printf("나이 : ");
    scanf("%d", &(arr[num].age));
    printf("키 : ");
    scanf("%lf", &(arr[num].height));
    printf("몸무게 : ");
    scanf("%lf", &(arr[num].weight));
    printf("입력을 완료했습니다.\n\n");
}

void print_friend (struct info * arr, int check) {
    printf("\n등록된 친구 목록\n");
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
                printf("친구는 최대 5명까지 입력이 가능합니다.\n\n");
                continue;
            }
            add_friend(arr, check++);
        
        }
        else if (func == 2) {
            if (check == 0) {
                printf("등록된 친구가 없습니다.\n\n");
                continue;
            }
            print_friend(arr, check);
        }
        else if (func == 3) break;
        else {
            printf("올바른 번호를 입력해주세요.\n\n");
            continue;
        }
    }
    return 0;
}