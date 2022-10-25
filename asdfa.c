#include <stdio.h>

int main(void)
{
    char s[] = "abcdefgh";
    char *S = s;
    S[5] = 0;
    printf("%s", S);

   return 0;
}