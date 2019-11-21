/*  4. Desenvolva um programa que leia um vetor do tipo inteiro 
	com 5 posições, e apresente seus elementos em ordem crescente.
*/

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	int tamanho = 5;
	int vetor[tamanho];
	
	for(i = 0; i < 5; i++){
		printf("%dº número: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	int j;
	for(i = 0; i < tamanho - 1; i++){
		for(j = i + 1; j < tamanho; j++){
			if(vetor[i] > vetor[j]){
				int aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	
	printf("Valores em ordem crescent: ");
	for(i = 0; i < 5; i++)
		printf("%d ", vetor[i]);
	
	return 0;
}
