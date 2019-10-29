#include <stdio.h>
#include <stdlib.h>

int main(){
    double nota1, nota2, nota3, nota4, media;

    printf("Nota 1: ");
    scanf("%lf",  &nota1);

	printf("Nota 2: ");
    scanf("%lf",  &nota2);

    printf("Nota 3: ");
    scanf("%lf",  &nota3);

    printf("Nota 4: ");
    scanf("%lf",  &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if(media >= 9)
    	printf("A!");
	else if(media >= 7 && media < 9)
		printf("B!");
	else if(media >= 5 && media < 7)
		printf("C!");
	else if(media >= 2.5 && media < 5)
		printf("D!");
	else
		printf("E!");

	getch();
    return 0;
}
