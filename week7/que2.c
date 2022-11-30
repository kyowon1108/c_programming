/*
2022204080 이교원
홀수이면 앞자리 인덱스부터 채움
짝수이면 뒷자리 인덱스부터 채움
*/

#include <stdio.h>

int main() {
    int arr[10];
    int frontidx = 0, backidx = 9;
    printf("총 10개의 숫자 입력\n");
    for (int i = 0; i < 10; ++i) {
        int num;
        printf("입력 : ");
        scanf("%d", &num);

        if (num % 2 == 1) arr[frontidx++] = num;
        else arr[backidx--] = num;
    }

    printf("배열 요소의 출력 : ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}