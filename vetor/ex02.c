/*  2. Ler 10 elementos de um vetor A e a partir do �ndice, verificar se o 
	�ndice � par, ser for multiplique o elemento por 5, sen�o some o elemento 
	com 5. Os resultados das opera��es devem ser armazenados em um vetor B de 
	mesma dimens�o. Apresentar o vetor A e vetor b ao final.
*/

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int tamanho = 10;
	int a[tamanho];
	int b[tamanho];
	int i;
	
	for(i = 0; i < tamanho; i++){
		printf("%d� n�mero: ", i + 1);
		scanf("%d", &a[i]);
		
		if(i % 2 == 0)
			b[i] =  a[i] * 5;
		else
			b[i] = a[i] + 5;
	}
	
	printf("\nVetor A: ");
	for(i = 0; i < tamanho; i++)
		printf("%d ", a[i]);
	
	printf("\n\nVetor B: ");
	for(i = 0; i < tamanho; i++)
		printf("%d ", b[i]);

	return 0;
}
