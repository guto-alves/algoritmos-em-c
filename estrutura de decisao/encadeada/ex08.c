#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;

    printf("A: ");
    scanf("%d", &a);

    printf("B: ");
    scanf("%d", &b);

    printf("C: ");
    scanf("%d", &c);

	if(a < b && a < c && b < c)
		printf("%d, %d, %d.", a, b, c);
	else if(a < b && a < c && b > c)
		printf("%d, %d, %d.", a, c, b);
	else if(b < a && b < c && a < c)
		printf("%d, %d, %d.", b, a, c);
	else if(b < a && b < c && a < c)
		printf("%d, %d, %d.", b, c, a);
	else if(c < a && c < b && a < b)
		printf("%d, %d, %d.", c, a, b);
	else if(c < a && c < b && a > b)
		printf("%d, %d, %d.", c, b, a);
	else if(a == b && c > a)
		printf("%d, %d, %d.", a, b, c);
	else if(a == b && c < a)
		printf("%d, %d, %d.", c, a, b);
	else if(a == c && b < a)
		printf("%d, %d, %d.", b, a, c);
	else if(a == c && b > a)
		printf("%d, %d, %d.",  a, c, b);
	else if(c == b && c < a)
		printf("%d, %d, %d.",  c, b, a);
	else if(c == b && c > a)
		printf("%d, %d, %d.",  a, b, c);
	else
		printf("%d, %d, %d.", a, b, c);

	getch();
    return 0;
}
