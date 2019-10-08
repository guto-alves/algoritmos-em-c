/**
 * 1- Refaça o algoritmo para calcular a equação do 2º grau, levando em consideração a análise da existência do X1 e X2.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	double a, b, c, delta, x1, x2;

	printf("Coeficiente A: ");
	scanf("%lf", &a);

	printf("Coeficiente B: ");
	scanf("%lf", &b);

	printf("Coeficiente C: ");
	scanf("%lf", &c);

	delta = pow(b, 2) - 4 * a * c;

	if(a == 0) // // coeficiente 'A' não pode ser igual a zero
       printf("Error: não é uma equação 2º grau - coeficiente A inválido!");
	else if(delta > 0 ){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("X' = %.2f\nX\" = %.2f", x1, x2);
	} else if(delta == 0){ // raíz unica
        x1 = (-b + sqrt(delta)) / (2 * a);
        printf("X' = X\" = %.2f", x1);
	} else
        printf("Equação não possui raízes reais ... ");

	getch();
	return 0;
}
