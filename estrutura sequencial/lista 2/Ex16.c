/**
 * Faça um programa que receba o número de horas trabalhadas e
 * o valor do salário mínimo, calcule e mostre o salário a receber
 * seguindo estas regras:
 *
 * a) a hora trabalhada vale metade do salário mínino;
 * b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
 * c) o imposto equivale a 3% do salário bruto.
 * d) o salário a receber equivale ao salário bruto menos o imposto.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float horasTrabalhadas, valorPorHora, salarioMinimo, salarioBruto, imposto, salarioLiquido;

	printf("Numero de horas trabalhadas: ");
	scanf("%f", &horasTrabalhadas);

	printf("Valor do salario minimo: ");
	scanf("%f", &salarioMinimo);

	valorPorHora = salarioMinimo / 2;

	salarioBruto = horasTrabalhadas * valorPorHora;

	imposto = salarioBruto * 0.03;

	salarioLiquido = salarioBruto - imposto;

	printf("Salario a receber = R$ %.2f\n\n", salarioLiquido);

	getchar();
	return 0;
}
