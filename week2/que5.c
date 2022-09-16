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