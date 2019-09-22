/**
 * 2- Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float n1, n2, n3, media;

	printf("Digite a primeira nota: ");
	scanf("%f", &n1);

	printf("Digite a segunda nota: ");
	scanf("%f", &n2);

	printf("Digite a terceira nota: ");
	scanf("%f", &n3);

	media = (n1 + n2 + n3) / 3;

	printf("Media = %.2f\n", media);

	system("pause");
	return 0;
}
