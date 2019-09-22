/**
 * 7- Faça um programa que receba o salário base de um funcionário, calcule e
 * mostre o seu salário a receber, sabendo-se que o funcionário tem gratificação
 * de R$ 500,00 e paga imposto de 11% sobre o salário base.
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
