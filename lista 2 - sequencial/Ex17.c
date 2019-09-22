/**
 * 17. Um trabalhador recebeu seu salário e o depositou em sua conta bancária.
 * Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual.
 * Sabe-se que cada operação bancária de retirada paga CPMF de 0.38% e o saldo
 * inicial da conta está zerado.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float deposito, cheque1, cheque2, saldoAtual;
    const float TAXA_CPMF = 0.38;

	printf("Digite o valor do deposito: ");
	scanf("%f", &deposito);

    printf("Valor de retirada (primeiro cheque): ");
	scanf("%f", &cheque1);

    printf("Valor de retirada (segundo cheque): ");
	scanf("%f", &cheque2);

	saldoAtual = deposito - cheque1 - cheque2;
	saldoAtual -= cheque1 * TAXA_CPMF / 100;
	saldoAtual -= cheque2 * TAXA_CPMF / 100;

	printf("Saldo atual = R$ %f\n", saldoAtual);

	getchar();
	return 0;
}
