/**
 * 14- Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
 * a) a idade da pessoa;
 * b)quantos ela terá em 2050.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int anoNascimento, idade, idadeFuturo;

	printf("Digite seu ano de nascimento: ");
	scanf("%d", &anoNascimento);

	idade = 2019 - anoNascimento;
	idadeFuturo = 2050 - anoNascimento;

	printf("Idade = %d\n", idade);
	printf("Em 2050 voce tera %d anos\n\n", idadeFuturo);

	system("pause");
	return 0;
}
