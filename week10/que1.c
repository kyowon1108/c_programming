/*
2022204080 �̱���
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int len;
  printf("���ϴ� �迭�� ���� �Է� : ");
  scanf("%d", &len);

  int * arr = (int*)malloc(sizeof(int) * len);
  printf("n���� ���� �Է� : ");
  for (int i = 0; i < len; ++i) {
    scanf("%d", &arr[i]);
  }
  printf("�Է� ���� ���� : ");
  for (int i = 0; i < len; ++i) {
    printf("%d ", arr[i]);
  }
  free(arr);
  return 0;
}