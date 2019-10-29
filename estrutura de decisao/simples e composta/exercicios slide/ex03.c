/**
 * 3- Criar um programa que receba 2 números e a partir da soma
 * apresentar a mensagem “soma maior que 25”, caso contrário finalize o programa.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int number1, number2, sum;

	printf("Enter the first number: ");
	scanf("%d", &number1);

	printf("Enter the second number: ");
	scanf("%d", &number2);

	sum = number1 + number2;

	if(sum > 25)
        printf("Soma maior que 25\n");

	system("pause");
	return 0;
}
