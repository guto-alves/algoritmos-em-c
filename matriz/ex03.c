/*	3. Construa um algoritmo que efetue a leitura, a soma e a 
	impressão do resultado entre duas matrizes inteiras que comportem 
	25 elementos.
*/

#include <stdio.h>

#define LINHAS 2
#define COLUNAS 2

int main(void){
	int matrizA[LINHAS][COLUNAS];
	int matrizB[LINHAS][COLUNAS];
	int i, j;
	
	printf("Digite valores para matriz A:\n");
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &matrizA[i][j]);
		}
	}
	
	printf("\nDigite valores para matriz B:\n");
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &matrizB[i][j]);
		}
	}
	
	printf("\nSoma das matrizes = %d\n", calcularSomaDaMatriz(matrizA) + calcularSomaDaMatriz(matrizB));

	return 0;
}

int calcularSomaDaMatriz(int matriz[LINHAS][COLUNAS]){
	int i, j;
	int soma = 0;
	
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++)
			soma += matriz[i][j];
	}
	
	return soma;
}
