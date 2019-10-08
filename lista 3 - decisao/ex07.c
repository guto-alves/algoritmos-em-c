/**
 * 7 - Crie um algoritmo que receba o ano de nascimento de uma pessoa. Calcule e mostre se atingiu a maioridade ou não.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    int anoNascimento;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    if(2019 - anoNascimento >= 18)
        printf("Atingiu a maioridade!");
    else
        printf("Não atingiu a maioridade!");

	getch();
	return 0;
}
