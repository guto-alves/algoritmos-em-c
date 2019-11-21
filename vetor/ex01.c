/*  1. Ler 10 elementos inteiros de um vetor, após finalizar a leitura
    apresentar todos os valores lidos.
*/

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i;
	int tamanho = 10;
	int vetor[tamanho];
	
	for(i = 0; i < tamanho; i++){
		printf("%dº número: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	printf("Valores digitados: ");
	for(i = 0; i < tamanho; i++)
		printf("%d ", vetor[i]);

	return 0;
}
