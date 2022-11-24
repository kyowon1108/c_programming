#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("길이 입력: ");
    int n1;
    scanf("%d", &n1);

    int * ptr;

    ptr = (int*)malloc(sizeof(int) * n1);

    printf("할당된 메모리의 주소값 출력:\n");
    for (int i = 0; i < n1; ++i) {
        printf("%p\n", ptr + i);
    }

    printf("\n새로운 길이 입력: ");
    int n2;
    scanf("%d", &n2);

    ptr = (int*)realloc(ptr, n2 * sizeof(int));

    printf("새로 할당된 메모리 주소 입력:\n");
    for(int i = 0; i < n2; ++i) {
        printf("%p\n", ptr + i);
    }

    free(ptr);
    return 0;
}