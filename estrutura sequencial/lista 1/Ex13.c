/**
 * 13- Fa�a um programa que receba uma medida em p�s, fa�a as convers�es a seguir e mostre os resultados.
 * a) podegadas;
 * b) jardas;
 * c) milhas.
 * Sabe-se que: 1 p� = 12 polegadas; 1 jarda = 3 p�s e 1 milha = 1.760 jardas.
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
