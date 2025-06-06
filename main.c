#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "login.h"
#include "menu.h"
#include "saldo.h"
#include "deposito.h"
#include "saque.h"
#include "historico.h"

int main() {
    setlocale(LC_ALL, "pt_PT");

    char conta_digitada[7];
    char senha_digitada[5];
    int tentativas = 0;
    int bloqueada = 0;

    char conta_correta[7] = "123456";
    char senha_correta[5] = "1111";
    float saldo = 1000.0;
    char historico[100][100];
    int qtd_transacoes = 0;

    printf("\n");
    printf("  +------------------------------+\n");
    printf("  |  BEM-VINDO AO CAIXA 24H      |\n");
    printf("  +------------------------------+\n");
    printf("  |                              |\n");
    printf("  | Por favor, insira seus dados |\n");
    printf("  |                              |\n");
    printf("  +------------------------------+\n");

    while(1) {
        if(bloqueada) {
            printf("\nConta bloqueada. Procure o gerente.\n");
            return 0;
        }

        printf("  Conta (6 digitos): ");
        scanf("%6s", conta_digitada);

        printf("  Senha (4 digitos): ");
        scanf("%4s", senha_digitada);

        if(strcmp(conta_digitada, conta_correta) == 0 && 
           strcmp(senha_digitada, senha_correta) == 0) {
            break;
        } else {
            tentativas++;
            printf("\nSenha incorreta. Tentativas restantes: %d\n", 3 - tentativas);
            if(tentativas >= 3) {
                bloqueada = 1;
            }
        }
    }

    int opcao;
    do {
        mostrar_menu();
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                consultar_saldo(saldo);
                break;
            case 2:
                realizarSaque(&saldo, historico, &qtd_transacoes);
                break;
            case 3:
                realizarDeposito(&saldo, historico, &qtd_transacoes);
                break;
            case 4:
                exibirHistorico(historico, qtd_transacoes);
                break;
            case 5:
                printf("Obrigado por usar nosso caixa eletrônico.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while(opcao != 5);

    return 0;
}

}