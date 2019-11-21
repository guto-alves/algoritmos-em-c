/*	4. Desenvolva um algoritmo que receba 120 valores numéricos inteiros 
	em uma matriz 10x12 e mostre a soma desses 120 números. 
*/

#include <stdio.h>

int main(void){
	int linhas = 2, colunas = 2;
	int matriz[linhas][colunas];
	int i, j;
	int soma = 0;
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++)
			soma += matriz[i][j];
	}	
	
	printf("Soma de todos os valores na matriz = %d\n", soma);

	return 0;
}
