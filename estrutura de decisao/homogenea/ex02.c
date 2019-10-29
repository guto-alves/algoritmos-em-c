#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    int numero1, numero2;
    char operacao[2];

    printf("Digite o primeiro número: ");
    scanf("%d",  &numero1);

    printf("Digite o segundo número: ");
    scanf("%d",  &numero2);

    printf("Digite a operação: ");
    scanf("%s",  operacao);

	if(strcmp("+", operacao) == 0)
		printf("%d + %d = %d", numero1, numero2, numero1 + numero2);
	else if(strcmp("-", operacao) == 0)
		printf("%d - %d = %d", numero1, numero2, numero1 - numero2);
	else if(strcmp("*", operacao) == 0)
		printf("%d x %d = %d", numero1, numero2, numero1 * numero2);
	else if(strcmp("/", operacao) == 0)
		printf("%d / %d = %d", numero1, numero2, numero1 / numero2);
	else
		printf("Operação inválida!");

	getch();
    return 0;
}
