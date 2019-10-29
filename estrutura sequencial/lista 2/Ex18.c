/**
 * 18. Pedro comprou um saco de ra��o com peso em quilos. Ele possui dois gatos,
 * para os quais fornece a quantidade de ra��o em gramas. A quantidade di�ria de
 * ra��o fornecida para cada gato � sempre a mesma. Fa�a um programa que receba o
 * peso do saco de ra��o e a quantidade de ra��o fornecida para cada gato, calcule
 * e mostre quanto restar� de ra��o no saco ap�s cinco dias.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    float pesoSacoRacao, qtdeFornecida;
    const int DIAS = 1;
    const int TOTAL_GATOS = 2;

    printf("Peso do saco de ra��o (em quilos): ");
    scanf("%f", &pesoSacoRacao);

    printf("Quantidade de ra��o fornecida para cada gato (em gramas): ");
    scanf("%f", &qtdeFornecida);

    pesoSacoRacao *= 1000;

    pesoSacoRacao -= (qtdeFornecida * TOTAL_GATOS) * DIAS;

    printf("Restar� %.2f quilos de ra��o no saco ap�s cinco dias!\n", pesoSacoRacao / 1000);

    getchar();
	return 0;
}
