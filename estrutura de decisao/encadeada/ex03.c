#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    double custoFabrica, custoConsumidor;
    int opcao;

    printf("MENU DE OPÇÕES\n1. BigMac \n2. Quarteirão \n3. MacChicken \n4. Cheddar MacMelt \n5. MacMax\nDigite o número da opção: ");
    scanf("%d",  &opcao);

	if(opcao == 1)
		printf("Saindo um BigMac!");
	else if(opcao == 2)
		printf("Saindo um Quarteirão!");
	else if(opcao == 3)
		printf("Saindo um MacChicken!");
	else if(opcao == 4)
		printf("Saindo um Cheddar MacMelt!");
	else if(opcao == 5)
		printf("Saindo um MacMax!");
	else
		printf("Opção inválida!");

	getch();
    return 0;
}
