/**
 * 6 - Crie um algoritmo que receba uma senha e verifique sua validade ou n�o. Senha v�lida �asdfg�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    char senha[6];

    printf("Senha: ");
    scanf("%s", senha);

    if(strcmp(senha, "asdfg") == 0)
        printf("Senha v�lida");
    else
        printf("Senha inv�lida");

	getch();
	return 0;
}
