/**
 * 6- Fa�a um programa que receba o sal�rio base de funcion�rio,
 * calcule e mostre o sal�rio a receber, sabendo-se que o funcion�rio
 * tem gratifica��o de 10% sobre o sal�rio base e paga o imposto de 15%
 * sobre este sal�rio.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float salario;

	printf("Digite seu salario base: ");
	scanf("%f", &salario);

	salario = salario * 1.10;
	salario = salario - salario * 0.15;

	printf("Salario a receber = R$ %.2f\n\n", salario);

	system("pause");
	return 0;
}
