/**
 * 15- O custo ao consumidor de um carro novo é a soma do preço de fábrica
 * com o percentual de lucro do distribuidor e dos impostos aplicados ao preço
 * de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o
 * percentual de lucro do distribuidor e o percentual de imposto, calcule e mostre:
 * a) o valor corresponde aos impostos;
 * b) o valor corresponde aos impostos;
 * c) o preço final do veículo.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float precoFrabrica, percentualLucro, percentualImposto, precoFinal;

	printf("Digite o preco de fabrica: ");
    scanf("%f", &precoFrabrica);

	printf("Digite o percentual de lucro do distribuidor: ");
	scanf("%f", &percentualLucro);

	printf("Digite o percentual de imposto: ");
	scanf("%f", &percentualImposto);

	percentualLucro = precoFrabrica * percentualLucro / 100;
	percentualImposto = precoFrabrica * percentualImposto / 100;
	precoFinal = precoFrabrica + percentualLucro + percentualImposto;

	printf("Valor correspondente aos lucros = R$ %.2f\n", percentualLucro);
	printf("Valor correspondente aos impostos = R$ %.2f\n", percentualImposto);
	printf("Preco final do veiculo = R$ %.2f\n\n", precoFinal);

	system("pause");
	return 0;
}
