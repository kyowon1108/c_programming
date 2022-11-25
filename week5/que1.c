#include <stdio.h>

struct student // 학번, 이름, 점수, 평균을 담고있는 student 구조체
{
    int num;
    char name[20];
    int score[5];
    double avg;
};

double avg(int * num) { // 평균을 구하는 함수
    double sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += num[i];
    }
    return sum / 5;
}
int main() {
    struct student st = {315, "홍길동", {82, 93, 74, 90, 65}, avg(st.score)}; // 정의하는 동시에 값을 대입함
    printf("학번 : %d\n", st.num);
    printf("이름 : %s\n", st.name);
    printf("점수 : ");
    for (int i = 0; i < 5; ++i) {
        printf("%5d", st.score[i]);
    }
    printf("\n평균 : %.1f", st.avg);
}