/**
 * 24. Receba uma hora formada por horas e minutos (um número real), calcule e mostre a hora
 * digitada apenas em minutos. Lembre-se de que: para quatro e meia deve-se digitar 4.30.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float horas;
	int minutos;

	printf("\nDigite a hora e minutos (Ex.: 4.30): ");
	scanf("%f", &horas);

	minutos = (int)horas * 60;
	minutos += (horas - (int)horas) * 100;

	printf("Total de minutos = %d\n", minutos);

	getchar();
	return 0;
}
