/**
 * 23. Receba um n�mero real, calcule e mostre:
 * a parte inteira desse n�mero;
 * a parte fracion�ria desse n�mero;
 * o arredondamento desse n�mero.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

	float number;

	printf("Digite um n�mero real: ");
	scanf("%f", &number);

	float parteInteira, parteFracionario, arredondamento;

	printf("Parte inteira: %d\n", (int) number);
	printf("Parte fracion�ria: %f\n", (number - (int)number));
	printf("Arredondamento: %d\n", (int) number + 1);

	getchar();
	return 0;
}
