/**
 * 1- Refa�a o algoritmo para calcular a equa��o do 2� grau, levando em considera��o a an�lise da exist�ncia do X1 e X2.
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

	if(a == 0) // // coeficiente 'A' n�o pode ser igual a zero
       printf("Error: n�o � uma equa��o 2� grau - coeficiente A inv�lido!");
	else if(delta > 0 ){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("X' = %.2f\nX\" = %.2f", x1, x2);
	} else if(delta == 0){ // ra�z unica
        x1 = (-b + sqrt(delta)) / (2 * a);
        printf("X' = X\" = %.2f", x1);
	} else
        printf("Equa��o n�o possui ra�zes reais ... ");

	getch();
	return 0;
}
