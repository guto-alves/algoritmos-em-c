/**
 * 3- Faça um programa que receba três notas e seus respectivos pesos,
 * calcule e mostre a média ponderada dessa notas.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float nota1, nota2, nota3, peso1, peso2, peso3, mediaPonderada;

	printf("Nota 1: ");
	scanf("%f", &nota1);

	printf("Peso 1: ");
	scanf("%f", &peso1);

	printf("Nota 2: ");
	scanf("%f", &nota2);

	printf("Peso 2: ");
	scanf("%f", &peso2);

	printf("Nota 3: ");
	scanf("%f", &nota3);

	printf("Peso 3: ");
	scanf("%f", &peso3);

	mediaPonderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

	printf("Media Ponderada = %.2f\n", mediaPonderada);

	system("pause");
	return 0;
}
