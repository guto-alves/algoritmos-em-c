#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");

	double horarioTrabalho;

	printf("Digite o horário de trabalho: ");
	scanf("%lf", &horarioTrabalho);

	if(horarioTrabalho < 0 || horarioTrabalho > 23.59)
        printf("Horário inválido");
	else if(horarioTrabalho >= 5  && horarioTrabalho <= 12.59)
		printf("Turno manhã");
	else if(horarioTrabalho >= 13 && horarioTrabalho <= 18.59)
		printf("Turno tarde!");
	else
		printf("Turno noite!");

	getch();
	return 0;
}
