#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;

    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    if(x > y)
        printf("O maior é X");
    else if(y > x)
        printf("O maior é Y");

    return 0;
}