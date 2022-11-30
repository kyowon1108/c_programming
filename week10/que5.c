/*
2022204080 ÀÌ±³¿ø
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter limit of the text: ");
    int num;
    scanf("%d", &num);

    char * text = (char*)malloc(sizeof(char) * num);

    printf("Enter text: ");
    getchar();
    gets(text);

    printf("Inputted text is: %s", text);

    free(text);

    return 0; 
}