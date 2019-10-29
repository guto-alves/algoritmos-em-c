/**
 * 6 - Crie um algoritmo que receba uma senha e verifique sua validade ou não. Senha válida “asdfg”.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    double quilos;
    double preco = 0;

    printf("Quantidade de quilos: ");
    scanf("%lf", &quilos);

    if(quilos > 50)
        preco = (quilos - 50) * 4;

    printf("Preço a pagar = R$ %.2f", preco);

	getch();
	return 0;
}
