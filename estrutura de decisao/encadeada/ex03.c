#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    double custoFabrica, custoConsumidor;
    int opcao;

    printf("MENU DE OP��ES\n1. BigMac \n2. Quarteir�o \n3. MacChicken \n4. Cheddar MacMelt \n5. MacMax\nDigite o n�mero da op��o: ");
    scanf("%d",  &opcao);

	if(opcao == 1)
		printf("Saindo um BigMac!");
	else if(opcao == 2)
		printf("Saindo um Quarteir�o!");
	else if(opcao == 3)
		printf("Saindo um MacChicken!");
	else if(opcao == 4)
		printf("Saindo um Cheddar MacMelt!");
	else if(opcao == 5)
		printf("Saindo um MacMax!");
	else
		printf("Op��o inv�lida!");

	getch();
    return 0;
}
