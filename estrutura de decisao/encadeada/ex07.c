#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("Digite a primeira data: \n");
    scanf("%d %d %d",  &dia1,  &mes1,  &ano1 );

    printf("Digite a segunda data: \n");
    scanf("%d %d %d",  &dia2,  &mes2,  &ano2 );

	if(ano1 < ano2)
		printf("%02d/%02d/%04d - %02d/%02d/%.04d", dia1, mes1, ano1, dia2, mes2, ano2);
	else if(ano1 > ano2)
		printf("%02d/%02d/%04d - %02d/%02d/%.04d", dia2, mes2, ano2, dia1, mes1, ano1);
	else{
		if(mes1 < mes2)
			printf("%02d/%02d/%04d - %02d/%02d/%.04d", dia1, mes1, ano1, dia2, mes2, ano2);
		else if(mes1 > mes2)
			printf("%02d/%02d/%04d - %02d/%02d/%.04d", dia2, mes2, ano2, dia1, mes1, ano1);
		else{
			if(dia1 < dia2)
				printf("%02d/%02d/%04d - %02d/%02d/%.04d", dia1, mes1, ano1, dia2, mes2, ano2);
			else
				printf("%02d/%02d/%04d - %02d/%02d/%.04d", dia2, mes2, ano2, dia1, mes1, ano1);
		}
	}

	getch();
    return 0;
}
