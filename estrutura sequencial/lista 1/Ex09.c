/**
 * 9- Fa�a um programa que calcule e mostre a �rea de um tri�ngulo.
 * Sabe-se que: �rea = (base * altura)/2.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float base, altura, area;

	printf("Digite a base: ");
	scanf("%f", &base);

	printf("Digite a altura: ");
	scanf("%f", &altura);

	area = (base * altura) / 2;

	printf("Area = %.2f\n\n", area);

	system("pause");
	return 0;
}
