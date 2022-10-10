/*
2022204080 이교원
sort 함수는 입력박은 num 배열을 정렬을 하여 출력함.
2중 for문을 사용해 num의 i번째 인덱스가 num의 j번째 인덱스보다 작을 경우 둘의 위치를 바꿈
sortReverse 함수는 거꾸로 정렬한 배열을 출력함.
how 변수에는 ASC를 출력할 것인지 아니면 CESC로 출력할 것인지를 정함.
*/

#include <stdio.h>

void sort(int num[], int len) {
    int a;
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            if (num[i] < num[j]) {
                int a = num[i];
                num[i] = num[j], num[j] = a;
            }
        }
    }
    printf("{ ");
    for (int i = 0; i < 10; ++i) {
        if (i != 9) printf("%d, ", num[i]);
        else printf("%d", num[i]);
    }
    printf(" }");
}

void sortReverse(int num[], int len) {
    int a;
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            if (num[i] > num[j]) {
                int a = num[i];
                num[i] = num[j], num[j] = a;
            }
        }
    }
    printf("{ ");
    for (int i = 0; i < 10; ++i) {
        if (i != 9) printf("%d, ", num[i]);
        else printf("%d", num[i]);
    }
    printf(" }");
}

int main() {
    int how;
    int num[10];
    printf("정렬 방법을 선택하세요.\n1.ASC 2.CESC : ");
    scanf("%d", &how);
    printf("10개의 정수를 입력하세요\n");
    
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &num[i]);
    }

    if (how == 1) sort(num, 10);
    else sortReverse(num, 10);
    return 0;
}