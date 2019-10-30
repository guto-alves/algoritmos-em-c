#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (int argc, char *argv[]){
	int i;
	
	for(i = 0; i <= 15; i++)
		printf("3 ^ %d = %.0lf\n", i, pow(3, i));
		
	getch();
	return 0;
}
