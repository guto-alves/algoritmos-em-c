/**
 * 25. Receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
 * Esse programa deve calcular e mostrar a quantidade de convites que devem ser
 * vendidos para que pelo menos o custo do espetáculo seja alcançado.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

	float custo, precoConvite;

	printf("Digite o custo de um espetáculo teatral: ");
	scanf("%f", &custo);

	printf("Digite o preço do convite desse espetáculo: ");
	scanf("%f", &precoConvite);

	printf("Devem ser vendidos no minino %.0f convites\n", custo / precoConvite);

	getchar();
	return 0;
}
