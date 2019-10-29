/**
 * 11- Fa�a um programa que receba um n�mero positivo e maior que zero, calcule e mostre:
 * a) o n�mero digitado ao quadrado;
 * b) o n�mero digitado ao cubo;
 * c) a raiz quadrada do n�mero digitado;
 * d) a raiz c�bica do n�mero digitado.
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
