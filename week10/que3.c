#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("���� �Է�: ");
    int n1;
    scanf("%d", &n1);

    int * ptr;

    ptr = (int*)malloc(sizeof(int) * n1);

    printf("�Ҵ�� �޸��� �ּҰ� ���:\n");
    for (int i = 0; i < n1; ++i) {
        printf("%p\n", ptr + i);
    }

    printf("\n���ο� ���� �Է�: ");
    int n2;
    scanf("%d", &n2);

    ptr = (int*)realloc(ptr, n2 * sizeof(int));

    printf("���� �Ҵ�� �޸� �ּ� �Է�:\n");
    for(int i = 0; i < n2; ++i) {
        printf("%p\n", ptr + i);
    }

    free(ptr);
    return 0;
}