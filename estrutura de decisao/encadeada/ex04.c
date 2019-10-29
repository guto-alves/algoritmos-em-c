#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");

	int mes;

	printf("Digite o número do mês: ");
	scanf("%d", &mes);

	if(mes <= 0 || mes > 12)
		printf("Número do mês inválido!");
	else{
		switch(mes){
			case 1:
				printf("Janeiro");
				break;
			case 2:
				printf("Fevereiro");
				break;
			case 3:
				printf("Março");
				break;
			case 4:
				printf("Abril");
				break;
			case 5:
				printf("Maio");
				break;
			case 6:
				printf("Junho");
				break;
			case 7:
				printf("Julho");
				break;
			case 8:
				printf("Agosto");
				break;
			case 9:
				printf("Setembro");
				break;
			case 10:
				printf("Outubro");
				break;
			case 11:
				printf("Novembro");
				break;
			case 12:
				printf("Dezembro");
				break;
		}
	}

	getch();
	return 0;
}
