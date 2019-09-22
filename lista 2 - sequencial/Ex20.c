/**
 * 20. Faça um programa que receba a medida do ângulo formado por uma escada apoiada
 * no chão e encostada na parede e a altura da parede onde está a ponta da escada,
 * calcule e mostre a medida desta escada.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

	float angulo, altura, medidaEscada, radiano;

	printf("Ângulo: ");
	scanf("%f", &angulo);

	printf("Altura: ");
	scanf("%f", &altura);

	radiano = angulo * M_PI / 180;
    medidaEscada = altura / sin(radiano);

	printf("\nA medida da escada = %.2f \n", medidaEscada);

	getchar();
	return 0;
}
