/*  3. Desenvolva um programa que leia dois vetores A e B com 10 posições cada, 
	do tipo inteiro e exiba a quantidade de números pares e ímpares existentes 
	em cada vetor.
*/

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int tamanho = 3;
	int a[tamanho];
	int b[tamanho];
	int i;
	
	printf("Vetor A:\n");
	for(i = 0; i < tamanho; i++){
		printf("%dº número: ", i + 1);
		scanf("%d", &a[i]);
	}
	
	printf("\n\nVetor B:\n");
	for(i = 0; i < tamanho; i++){
		printf("%dº número: ", i + 1);
		scanf("%d", &b[i]);
	}
	
	printf("Vetor A: \n");
	mostrarParImpar(a, tamanho);
	
	printf("\n\nVetor B: \n");
	mostrarParImpar(b, tamanho);
	
	return 0;
}

void mostrarParImpar(int vetor[], int tamanho){
	int qtdPares = 0, qtdImpares = 0;
	int i;
	for(i = 0; i < tamanho; i++){
		if(vetor[i] % 2 == 0)
			qtdPares++;
		else
			qtdImpares++;
	}	
	
	printf("Quantidade Pares: %d ", qtdPares);
	printf("Quantidade Ímpares: %d", qtdImpares);
}
