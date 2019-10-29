#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int idade;

    printf("Idade: ");
    scanf("%d",  &idade);

    if(idade >= 10 && idade <= 18)
    	printf("Idade está no intervalo de 10 a 18 anos.");
	else
		printf("Idade não está no intervalo de 10 a 18 anos.");

	getch();
    return 0;
}
