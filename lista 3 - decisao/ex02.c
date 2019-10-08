/**
 * 2- Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo
 * que calcule seu peso ideal, utilizando as seguintes formulas:
 *  HOMEM=(72.7*ALT)-58;
 *  MULHER=(62.1*ALT)-44.7.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    double pesoIdeal;
    double altura;
    char sexo[1];

    printf("Digite sua altura: ");
    scanf("%lf", &altura);

    printf("Digite seu sexo: ");
    scanf("%s", sexo);

    if (!strcmp(sexo, 'm')){
        printf("Masculino");
        pesoIdeal = 72.7 * altura - 58;
    }else
        pesoIdeal = 62.1 * altura - 44.7;

    printf("Peso ideal = %f", pesoIdeal);

	getch();
	return 0;
}
