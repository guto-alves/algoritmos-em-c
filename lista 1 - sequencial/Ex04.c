/**
 * 4-Fa�a um programa que receba o sal�rio de um funcion�rio,
 * calcule e mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float salario;

	printf("Digite seu salario: ");
	scanf("%f", &salario);

	printf("Salario com aumento de 25 porcento = R$ %.2f\n\n", salario * 1.25);

	system("pause");
	return 0;
}
