/**
 * 8- Faça um programa que receba o valor de um depósito e o valor da taxa de juros,
 * calcule e mostre o valor do rendimento e valor total depois do rendimento.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float deposito, taxaJuros, rendimento, valorTotal;

	printf("Digite o valor do deposito: ");
	scanf("%f", &deposito);

	printf("Digite a taxa de juros: ");
	scanf("%f", &taxaJuros);

	rendimento = deposito * (taxaJuros / 100);
	valorTotal = deposito + rendimento;

	printf("Valor do rendimento = R$ %.2f\n", rendimento);
	printf("Valor total = R$ %.2f\n\n", valorTotal);

	system("pause");
	return 0;
}
