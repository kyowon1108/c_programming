/*
2022204080 �̱���
�й�, �̸�, ����, ����� ����ִ� student ����ü
avg : ����� ���ϴ� �Լ�
�����ϴ� ���ÿ� ���� �����ϰ� ���
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
    struct student st = {315, "ȫ�浿", {82, 93, 74, 90, 65}, avg(st.score)};
    printf("�й� : %d\n", st.num);
    printf("�̸� : %s\n", st.name);
    printf("���� : ");
    for (int i = 0; i < 5; ++i) {
        printf("%5d", st.score[i]);
    }
    printf("\n��� : %.1f", st.avg);
}