#include <stdio.h>

void realizarSaque(float *saldo, char historico[][100], int *qtd) {
    float valorSaque;

    printf("Digite o valor a ser sacado: R$ ");
    scanf("%f", &valorSaque);

    if (valorSaque <= 0 || valorSaque > *saldo) {
        printf("Valor invalido ou saldo insuficiente!\n");
        return;
    }

    *saldo -= valorSaque;
    printf("Saque de R$ %.2f realizado com sucesso!\n", valorSaque);
    printf("Novo saldo: R$ %.2f\n", *saldo);

    sprintf(historico[*qtd], "Saque: R$ %.2f", valorSaque);
    (*qtd)++;
}