#include <stdio.h>
#include <string.h>

int main() {
    char arr[5][19];
    int index, len = 0;
    printf("5개의 과일 이름 입력 : ");
    for (int i = 0; i < 5; ++i) {
        scanf("%s", arr[i]);
        if (strlen(arr[i]) > len) {
            index = i, len = strlen(arr[i]);
        }
    }
    
    printf("길이가 가장 긴 과일 이름은 %s입니다.", arr[index]);
    return 0;
}