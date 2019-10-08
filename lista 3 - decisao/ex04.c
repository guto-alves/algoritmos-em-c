/**
 * 4 - Crie um programa que receba um valor inteiro e indique se o mesmo é par ou ímpar.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if(number % 2 == 0)
        printf("%d é par!", number);
    else
        printf("%d é impar!", number);

	getch();
	return 0;
}
