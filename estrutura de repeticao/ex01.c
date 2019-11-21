#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, i;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	for(i = 1; i <= 10; i++)
		printf("%d x %d = %d\n", numero, i, numero * i);
		
	getch();
	return 0;
}
