#include <stdio.h>

void realizarDeposito(float *saldo, char historico[][100], int *qtd) {
    float valorDeposito;

    printf("Digite o valor a ser depositado: R$ ");
    scanf("%f", &valorDeposito);

    if (valorDeposito <= 0) {
        printf("Valor invalido! O deposito deve ser maior que zero.\n");
        return;
    }

    *saldo += valorDeposito;
    printf("Deposito de R$ %.2f realizado com sucesso!\n", valorDeposito);
    printf("Novo saldo: R$ %.2f\n", *saldo);

    sprintf(historico[*qtd], "Deposito: R$ %.2f", valorDeposito);
    (*qtd)++;
}