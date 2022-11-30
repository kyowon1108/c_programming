/*
2022204080 이교원
학번, 이름, 점수, 평균을 담고있는 student 구조체
avg : 평균을 구하는 함수
정의하는 동시에 값을 대입하고 출력
*/

#include <stdio.h>

struct student
{
    int num;
    char name[20];
    int score[5];
    double avg;
};

double avg(int * num) {
    double sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += num[i];
    }
    return sum / 5;
}
int main() {
    struct student st = {315, "홍길동", {82, 93, 74, 90, 65}, avg(st.score)};
    printf("학번 : %d\n", st.num);
    printf("이름 : %s\n", st.name);
    printf("점수 : ");
    for (int i = 0; i < 5; ++i) {
        printf("%5d", st.score[i]);
    }
    printf("\n평균 : %.1f", st.avg);
}