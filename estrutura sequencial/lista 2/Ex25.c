/**
 * 25. Receba o custo de um espet�culo teatral e o pre�o do convite desse espet�culo.
 * Esse programa deve calcular e mostrar a quantidade de convites que devem ser
 * vendidos para que pelo menos o custo do espet�culo seja alcan�ado.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

	float custo, precoConvite;

	printf("Digite o custo de um espet�culo teatral: ");
	scanf("%f", &custo);

	printf("Digite o pre�o do convite desse espet�culo: ");
	scanf("%f", &precoConvite);

	printf("Devem ser vendidos no minino %.0f convites\n", custo / precoConvite);

	getchar();
	return 0;
}
