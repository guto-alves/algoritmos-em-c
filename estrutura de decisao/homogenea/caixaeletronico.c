#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    double saldo = 10000;
    double valor;
    int opcao;

    do{
        printf("CAIXA ELETR�NICO\n1. Saque\n2. Empr�stimo\n3. Saldo\n4. Dep�sito\n9 - Sair\n - Digite o n�mero da op��o: ");
        scanf("%d",  &opcao);

        system("CLS");

        switch(opcao){
        case 1:
            printf("1. Saque\n - Digite o valor do saque: ");
            scanf("%lf",  &valor);
            saldo -= valor;
            break;
        case 2:
            break;
        case 3:
            printf("Saldo = R$ %.2lf", saldo);
            break;
        case 4:
            printf("4. Dep�sito\n - Digite o valor do dep�sito: ");
            scanf("%lf",  &valor);
            saldo += valor;
            break;
        case 9:
            printf("Encerrando...");
            break;
        default:
            printf("Op��o inv�lida!");
        }
         system("pause");
    }while(opcao != 9);

	getch();
    return 0;
}
