#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    int maior, menor;

    printf("X: ");
    scanf("%d", & x);

    printf("Y: ");
    scanf("%d", & y);

    printf("Z: ");
    scanf("%d", & z);

    if(x > y)
        {
            maior = x;
            menor = y;
        }
    else
        {
            maior = y;
            menor = x;
        }

    if(z > menor && z < maior)
        printf("%d pertence ao intervalo [%d,%d]", z, menor, maior);
    else
        printf("%d nao pertence ao intervalo [%d,%d]", z, menor, maior);

    return 0;
}