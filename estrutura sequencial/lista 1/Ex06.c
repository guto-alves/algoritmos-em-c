/**
 * 6- Faça um programa que receba o salário base de funcionário,
 * calcule e mostre o salário a receber, sabendo-se que o funcionário
 * tem gratificação de 10% sobre o salário base e paga o imposto de 15%
 * sobre este salário.
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
