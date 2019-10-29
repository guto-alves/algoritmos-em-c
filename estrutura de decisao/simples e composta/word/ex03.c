#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    if(x < y)
        printf("O menor = X");
    else if(y < x)
        printf("O menor = Y");

    return 0;
}