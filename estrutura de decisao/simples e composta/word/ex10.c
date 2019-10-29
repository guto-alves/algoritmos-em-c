#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, nota3, media;

    printf("1° Nota: ");
    scanf("%lf", & nota1);

    printf("2° Nota: ");
    scanf("%lf", & nota2);

    printf("3° nota: ");
    scanf("%lf", & nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    printf("Media = %.2f", media);

    return 0;
}