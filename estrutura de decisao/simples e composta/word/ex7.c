#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Digite um numero: ");
    scanf("%d", & number);

    if(number % 5 == 0)
        printf("%d eh multiplo de 5", number);
    else
        printf("%d nao eh multiplo de 5", number);

    return 0;
}