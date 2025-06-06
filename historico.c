#include <stdio.h>

void exibirHistorico(char historico[][100], int qtd) {
    printf("\n--- Histórico de Transações ---\n");
    if (qtd == 0) {
        printf("Nenhuma transação realizada.\n");
    } else {
        for (int i = 0; i < qtd; i++) {
            printf("%d. %s\n", i + 1, historico[i]);
        }
    }
    printf("-------------------------------\n");
}