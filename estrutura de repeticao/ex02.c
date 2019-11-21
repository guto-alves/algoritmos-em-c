#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]){
	int i;
	
	for(i = 1; i <= 100; i += 2)
		printf("%d\n", i);
		
	getch();
	return 0;
}
