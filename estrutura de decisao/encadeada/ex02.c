#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");

	double altura, peso, imc;

	printf("Digite a altura: ");
	scanf("%lf", &altura);

	printf("Digite o peso: ");
	scanf("%lf", &peso);

	imc = peso / (altura * altura);

	if(imc <= 18)
		printf("Magresa, se alimente melhor");
	else if(imc > 18 && imc <= 24.9)
		printf("Parabéns, continue assim!");
	else if(imc > 25 && imc <= 29.9)
		printf("Fique atento a sua alimentação!");
	else if(imc > 30)
		printf("Obesidade, procure um médico!");

	getch();
	return 0;
}
