/**
 * 11- Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
 * a) o número digitado ao quadrado;
 * b) o número digitado ao cubo;
 * c) a raiz quadrada do número digitado;
 * d) a raiz cúbica do número digitado.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float number;

	printf("Digite um numero positivo e maior que zero: ");
	scanf("%f", &number);

	printf("Numero digitado ao quadrado = %.0f\n", pow(number, 2));
	printf("Numero digitado ao cubo = %.0f\n", pow(number, 3));
	printf("Raiz quadrada = %.2f\n", sqrt(number));
	printf("Raiz cubica = %.2f\n\n", pow(number, 1.0/3.0));

	system("pause");
	return 0;
}
