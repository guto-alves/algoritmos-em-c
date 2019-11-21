#include <stdio.h>

int main(void){
	int linhas = 2, colunas = 2;
	int matriz[linhas][colunas];
	int i, j;
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("Valores digitados: ");
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++)
			printf("%d ", matriz[i][j]);
	}	

	return 0;
}
