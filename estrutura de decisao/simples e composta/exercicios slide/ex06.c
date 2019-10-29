/**
 * 6 - Crie um algoritmo que receba uma senha e verifique sua validade ou não. Senha válida “asdfg”.
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
        printf("Senha válida");
    else
        printf("Senha inválida");

	getch();
	return 0;
}
