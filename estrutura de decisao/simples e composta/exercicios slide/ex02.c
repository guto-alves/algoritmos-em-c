/**
 * 2- Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo
 * que calcule seu peso ideal, utilizando as seguintes formulas:
 *  HOMEM=(72.7*ALT)-58;
 *  MULHER=(62.1*ALT)-44.7.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    double pesoIdeal;
    double altura;
    char sexo[2];

    printf("Digite sua altura: ");
    scanf("%lf", &altura);

    printf("Digite seu sexo: ");
    scanf("%s", sexo);

    if (strcmp(sexo, "m") == 0)
        pesoIdeal = 72.7 * altura - 58;
    else if(strcmp(sexo, "f") == 0)
        pesoIdeal = 62.1 * altura - 44.7;
    else{
        printf("Sexo inválido!\n");
        system("pause");
        return 0;
    }

    printf("Peso ideal = %.2f", pesoIdeal);

	getch();
	return 0;
}
