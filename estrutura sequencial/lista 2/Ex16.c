/**
 * Fa�a um programa que receba o n�mero de horas trabalhadas e
 * o valor do sal�rio m�nimo, calcule e mostre o sal�rio a receber
 * seguindo estas regras:
 *
 * a) a hora trabalhada vale metade do sal�rio m�nino;
 * b) o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada;
 * c) o imposto equivale a 3% do sal�rio bruto.
 * d) o sal�rio a receber equivale ao sal�rio bruto menos o imposto.
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
