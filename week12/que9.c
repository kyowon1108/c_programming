/*
2022204080 이교원
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 맨 마지막으로 입력받는 막대기 길이를 기준으로 함
// 맨 앞에 보이는 막대기를 기준으로 뒤에 큰 개수만큼 +로 보임
// 만약 2번째로 보이는 막대기가 제일 크다면 그 뒤로는 안보임 > 즉 이 막대기가 뒤 막대기 기준으로는 맨 앞에 보이는 막대기로 변함

int main() {
    printf("총 막대기의 개수 : ");
    int num;
    scanf("%d", &num);

    int * arr = (int*)malloc(sizeof(int) * num);

    for (int i = 0; i < num; ++i) {
        printf("막대기의 길이 : ");
        scanf("%d", &arr[i]);
    }

    int front = arr[num -1];
    int count = 1;

    for (int i = num - 1; i >= 0; --i) {
        if (arr[i] > front) {
            ++count;
            front = arr[i];
        }
    }

    printf("보이는 막대기의 개수 : %d", count);

    return 0;
}