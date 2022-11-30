/*
2022204080 이교원
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int len;
  printf("원하는 배열의 길이 입력 : ");
  scanf("%d", &len);

  int * arr = (int*)malloc(sizeof(int) * len);
  printf("n개의 정수 입력 : ");
  for (int i = 0; i < len; ++i) {
    scanf("%d", &arr[i]);
  }
  printf("입력 받은 정수 : ");
  for (int i = 0; i < len; ++i) {
    printf("%d ", arr[i]);
  }
  free(arr);
  return 0;
}