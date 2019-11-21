#include <stdio.h>
#include <locale.h>

#define LINHAS 4
#define COLUNAS 4

typedef struct {
    char nome[200];
} String;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	String nomes[4];
	double notas[LINHAS][LINHAS];
	double medias[4];
	
	int i, j;
	
	for(i = 0; i < LINHAS; i++){
		printf("%--- dº Aluno ----\n", i + 1);
		
		printf("Digite o nome do aluno: ");
		scanf("%s", nomes[i]);
		
		printf("Digite as 4 notas bimestrais:\n");
	
		for(j = 0; j < COLUNAS; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &notas[i][j]);
		}
	}
	
	double soma = 0;
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++)
			soma += notas[i][j];
		
		medias[i] = soma / 4;
		soma = 0;
	}
	
	for(i = 0; i < LINHAS; i++){
		printf("Aluno %s - média = %.2lf\n", nomes[i], medias[i]);
	}
		
	return 0;
}
