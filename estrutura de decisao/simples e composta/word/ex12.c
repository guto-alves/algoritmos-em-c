#include <stdio.h>
#include <stdlib.h>

int main(){
    double custoFabrica, custoConsumidor;
    
    printf("Digite o custo de fabrica de um carro: ");
    scanf("%lf",  &custoFabrica);

    custoConsumidor = custoFabrica + (custoFabrica * 0.28) + custoFabrica * 0.45;
    printf("Custo ao consumidor = R$ %.2f", custoConsumidor);

    return 0;
}
