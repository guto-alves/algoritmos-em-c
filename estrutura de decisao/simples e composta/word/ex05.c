#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double nota1, nota2, nota3, media;

    char sexo[1];

    printf("Digite seu sexo (F para Feminino e M para Masculino): ");
    scanf("%s",  &sexo);

    if(strcmp("M", sexo) == 0)
        {
            printf("Seja bem-vindo, Senhor!");
        }
    else if(strcmp("F", sexo) == 0)
        {
            printf("Seja bem-vinda, Senhora!");
        }
    else
        printf("Sexo inválido!");

    return 0;
}