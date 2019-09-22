/**
 * 18. Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos,
 * para os quais fornece a quantidade de ração em gramas. A quantidade diária de
 * ração fornecida para cada gato é sempre a mesma. Faça um programa que receba o
 * peso do saco de ração e a quantidade de ração fornecida para cada gato, calcule
 * e mostre quanto restará de ração no saco após cinco dias.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    float pesoSacoRacao, qtdeFornecida;
    const int DIAS = 1;
    const int TOTAL_GATOS = 2;

    printf("Peso do saco de ração (em quilos): ");
    scanf("%f", &pesoSacoRacao);

    printf("Quantidade de ração fornecida para cada gato (em gramas): ");
    scanf("%f", &qtdeFornecida);

    pesoSacoRacao *= 1000;

    pesoSacoRacao -= (qtdeFornecida * TOTAL_GATOS) * DIAS;

    printf("Restará %.2f quilos de ração no saco após cinco dias!\n", pesoSacoRacao / 1000);

    getchar();
	return 0;
}
