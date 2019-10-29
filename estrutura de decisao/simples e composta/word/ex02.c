#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;

    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    if(x == y)
        printf("X = Y");

    return 0;
}