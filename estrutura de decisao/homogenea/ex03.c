#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int idade;

    printf("Idade: ");
    scanf("%d",  &idade);

    if(idade >= 10 && idade <= 18)
    	printf("Idade est� no intervalo de 10 a 18 anos.");
	else
		printf("Idade n�o est� no intervalo de 10 a 18 anos.");

	getch();
    return 0;
}
