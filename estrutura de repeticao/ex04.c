#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main (int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	double altura;
	char sexo[10];
	double maiorAltura, menorAltura;
	double mediaAlturaMulheres, somaAlturaMulheres = 0;
	int homensCount = 0, mulheresCount = 0;
	int opcao;
	int i;
	
	do{
		printf("Digite 1 para continuar ou 0 para sair: ");
		scanf("%d", &opcao);	
		
		if(opcao == 1){
			printf("Altura: ");
			scanf("%lf", &altura);
				
			printf("Sexo: ");
			scanf("%s", sexo);	
				
			if(i == 0){
				i++;
				maiorAltura = altura;
				menorAltura = altura;
			}else{
				if(altura > maiorAltura)
					maiorAltura = altura;
				else if(altura < menorAltura)
					menorAltura = altura;
				}
				
			if(strcmp(sexo, "f") == 0){
				mulheresCount++;
				somaAlturaMulheres += altura;
			}else if(strcmp(sexo, "m") == 0)
				homensCount++;
			else
				printf("Sexo inválido!");
			
		} else if (opcao == 0){
			mediaAlturaMulheres = somaAlturaMulheres / mulheresCount;
			printf("Maior altura = %.2lf\n", maiorAltura);
			printf("Menor altura = %.2lf\n", menorAltura);
			printf("Média da altura das mulheres = %.2lf\n", mediaAlturaMulheres);
			printf("Número de homens = %d", homensCount);
			printf("Homens = %.2lf %%", 1 +(homensCount / (homensCount + mulheresCount)));
			printf("Mulheres = %.2f %%", 1 + (mulheresCount / (homensCount + mulheresCount)));

		} else{
			system("CLS");
			printf("Opção inválida! Tente novamente!\n");
		}
	} while(opcao != 0);
		
	getch();
	return 0;
}
