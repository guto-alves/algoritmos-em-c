/**
 * 19. Cada degrau de uma escada tem X de altura. Fa�a um programa que receba essa altura e a
 * altura que o usu�rio deseja alcan�ar subindo a escada, calcule e mostre quantos degraus ele
 * dever� subir para atingir seu objetivo, sem se preocupar com a altura do usu�rio. Todas as
 * medidas fornecidas devem estar em metros.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

	float alturaDoDegrau, alturaDesejada, degraus;

    printf("Altura do degrau: ");
	scanf("%f", &alturaDoDegrau);

	printf("Altura desejada: ");
	scanf("%f", &alturaDesejada);

    degraus = alturaDesejada / alturaDoDegrau;

	printf("Voc� devera subir %.0f degraus\n", degraus);

	getchar();
	return 0;
}
