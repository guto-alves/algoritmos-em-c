#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Digite um numero: ");
    scanf("%d", & number);

    if(number < 0)
        printf("%d eh negativo", number);
    else if(number > 0)
        printf("%d eh positivo", number);

    return 0;
}