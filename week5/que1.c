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
    printf("이름 : %d\n", st.num);
    printf("나이 : %s\n", st.name);
    printf("성적 : ");
    for (int i = 0; i < 5; ++i) {
        printf("%5d", st.score[i]);
    }
    printf("\n평균 : %.1f", st.avg);
}