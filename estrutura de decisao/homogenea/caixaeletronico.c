#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    double saldo = 10000;
    double valor;
    int opcao;

    do{
        printf("CAIXA ELETRÔNICO\n1. Saque\n2. Empréstimo\n3. Saldo\n4. Depósito\n9 - Sair\n - Digite o número da opção: ");
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
            printf("4. Depósito\n - Digite o valor do depósito: ");
            scanf("%lf",  &valor);
            saldo += valor;
            break;
        case 9:
            printf("Encerrando...");
            break;
        default:
            printf("Opção inválida!");
        }
         system("pause");
    }while(opcao != 9);

	getch();
    return 0;
}
