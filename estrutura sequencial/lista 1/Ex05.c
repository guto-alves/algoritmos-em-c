/**
 * 5- Faça um programa que receba o salário de um funcionário e percentual de aumento,
 * calcule e e mostre o valor do aumento e novo salário.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float salario, percentualAumento, valorAumento, novoSalario;

	printf("Digite seu salario: ");
	scanf("%f", &salario);

	printf("Digite o percentual de aumento: ");
	scanf("%f", &percentualAumento);

	valorAumento = salario * percentualAumento / 100;

	novoSalario = salario + valorAumento;

	printf("\nValor do aumento = R$ %.2f\n", valorAumento);
	printf("Novo salario = R$ %.2f\n\n", novoSalario);

	system("pause");
	return 0;
}
