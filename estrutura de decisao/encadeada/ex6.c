#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d",  &idade);

	printf("Categoria do nadador: ");

    if(idade >= 8 && idade <= 10)
    	printf("Infantil A");
	else if(idade >= 11 && idade <= 13)
		printf("Juvenil A");
	else if(idade >= 14 && idade <= 17)
		printf("Juvenil B");
	else if(idade >= 18)
		printf("Senior");

	getch();
    return 0;
}