/**
 * 12- Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int base, expoente;

	printf("Digite a base: ");
	scanf("%d", &base);

	printf("Digite o expoente: ");
	scanf("%d", &expoente);

	printf("%d ^ %d = %.0f\n\n", base, expoente, pow(base, expoente));

	system("pause");
	return 0;
}
