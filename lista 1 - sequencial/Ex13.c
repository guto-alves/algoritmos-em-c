/**
 * 13- Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
 * a) podegadas;
 * b) jardas;
 * c) milhas.
 * Sabe-se que: 1 pé = 12 polegadas; 1 jarda = 3 pés e 1 milha = 1.760 jardas.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float pes, polegadas, jardas, milhas;

	printf("Digite uma medida em pes: ");
	scanf("%f", &pes);

	polegadas = pes * 12;
	jardas = pes / 3;
	milhas = pes / 5280;

	printf("Em:\nPolegadas = %f\nJardas = %f\nMilhas = %f\n\n", polegadas, jardas, milhas);

	system("pause");
	return 0;
}
