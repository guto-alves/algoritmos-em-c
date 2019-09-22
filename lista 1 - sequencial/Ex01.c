/**
 * 1- Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n1, n2, n3, n4, soma;

	printf("Enter the first number: ");
	scanf("%d", &n1);

	printf("Enter the second number: ");
	scanf("%d", &n2);

	printf("Enter the third number: ");
	scanf("%d", &n3);

	printf("Enter the fourth number: ");
	scanf("%d", &n4);

	soma = n1 + n2 + n3 + n4;

	printf("sum = %d\n", soma);

	system("pause");
	return 0;
}
