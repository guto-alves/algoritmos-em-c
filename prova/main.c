#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

	double larg, alt, area, totalt, preco, preco2, precoFinal, tintas, tinta;
	printf("Digite a altura da parede: ");
	scanf("%lf", &alt);
	printf("Digite a largura da parede: ");
	scanf("%lf", &larg);

	area = larg * alt;
	totalt = area / 15;
	tintas = totalt * 3;
	tinta = totalt;
	preco = totalt * 100 * 3;
	preco2 = totalt * 150;
	precoFinal = preco + preco2;

	printf("\nSer�o necess�rias %.1lf latas de tintas para as 3 paredes \nSer�o necess�rias %.1lf para a �ltima com a cor escolhida pela empresa", tintas, tinta);
	printf("\nPre�o da tinta escolhida = R$ %.2f \nPre�o da tinta escolhida pela empresa = R$ %.2lf \nSoma dos pre�os � R$ %.2lf\n", preco, preco2, precoFinal);

	getch();
	return 0;
}
