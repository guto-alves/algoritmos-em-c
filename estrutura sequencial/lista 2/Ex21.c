/**
 * 21. Calcule e mostre a que distância deve estar uma escada da parede. O usuário
 * deve fornecer o tamanho da escada e a altura em que deseja pregar o quadro.
 * Lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja
 * alcançar.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");

	float tamanhoEscada, alturaQuadro, distancia;

	printf("Digite o tamanho da escada: ");
	scanf("%f", &tamanhoEscada);

	printf("Digite a altura que deseja pregar o quadro: ");
	scanf("%f", &alturaQuadro);

	distancia = sqrt(pow(tamanhoEscada, 2) - pow(alturaQuadro, 2));

	printf("Distância que a escada deve estar da parede = %.2f\n", distancia);

	getchar();
	return 0;
}
