#include <stdio.h>
#include <string.h>

int main() {
    char arr[10][20];
    int i = 0;
    while (i < 10) {
        printf("> 단어 입력 : ");
        scanf("%s", arr[i]);
        if (!strcmp(arr[i], "end")) {
            printf("# 총 %d개의 단어가 입력되었습니다!\n\n", i);
            break;
        }
        ++i;
    }
    
    while(1) {
        char check[20];
        printf("> 검색 단어 (종료는 end 입력) : ");
        scanf("%s", check);
        if (!strcmp(check, "end")) break;
        for(int k = 0; k < 10; ++k) {
            if (!strcmp(check, arr[k])) {
                printf("# %d번째 같은 단어가 있습니다!\n\n", k + 1);
                break;
            }
        }
    }
    return 0;
}