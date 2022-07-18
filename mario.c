#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int height;
    char brick = "#";

    do {
        printf("Enter a number: ");
        scanf("%d", &height);
    } while(height < 1);

    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%c", brick);
        }
        printf("\n");
    }
}