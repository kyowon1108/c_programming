#include <stdio.h>

struct info {
    char name[20];
    int age;
    double height;
    double weight;
};

int main() {
    struct info a;
    printf("대상자의 정보를 입력하세요\n");
    printf("이름 : ");
    scanf("%s", a.name);
    printf("나이 : ");
    scanf("%d", &a.age);
    printf("키 : ");
    scanf("%lf", &a.height);
    printf("몸무게 : ");
    scanf("%lf", &a.weight);

    printf("입력한 정보는 다음과 같습니다.\n");
    printf("%s : %d세, %.1fcm, %.1fkg", a.name, a.age, a.height, a.weight);

    return 0;
}