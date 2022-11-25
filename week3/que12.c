#include <stdio.h>

int main() {
    int ary1[3][4] = {15, 3, 9, 11, 23, 7, 10, 12, 0, 17, 55, 24};
    int ary2[3][4] = {13, 8, 9, 15, 23, 0, 10, 11, 29, 17, 43, 3};
    int count = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (ary1[i][j] == ary2[i][j]){
                count++;
            }
        }
    }
    printf("일치하는 번호의 수 : %d\n", count);
    printf("배열에서의 위치 (행, 열)...\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (ary1[i][j] == ary2[i][j]){
                printf("(%d, %d)\n", i, j); // 행과 열이 일치하는 항이 존재할떄까지 printf를 함
            }
        }
    }
    return 0;
}  