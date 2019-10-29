/**
 * 23. Receba um número real, calcule e mostre:
 * a parte inteira desse número;
 * a parte fracionária desse número;
 * o arredondamento desse número.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

	float number;

	printf("Digite um número real: ");
	scanf("%f", &number);

	float parteInteira, parteFracionario, arredondamento;

	printf("Parte inteira: %d\n", (int) number);
	printf("Parte fracionária: %f\n", (number - (int)number));
	printf("Arredondamento: %d\n", (int) number + 1);

	getchar();
	return 0;
}
