/**
 * 7- Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e
 * mostre o seu sal�rio a receber, sabendo-se que o funcion�rio tem gratifica��o
 * de R$ 500,00 e paga imposto de 11% sobre o sal�rio base.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float salario;

	printf("Digite seu salario base: ");
	scanf("%f", &salario);

	salario = salario - salario * 0.11;
    salario += 500;

	printf("Salario a receber = R$ %.2f\n\n", salario);

	system("pause");
	return 0;
}
