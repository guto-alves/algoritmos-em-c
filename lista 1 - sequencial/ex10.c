/**
 * 10- Fa�a um programa que calcule e mostre a �rea de um c�rculo.
 * Sabe-se que �rea = PI *r�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float raio, area;

	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);

	area = M_PI *  pow(raio, 2);

	printf("Area do circulo = %.2f\n\n", area);

	system("pause");
	return 0;
}
