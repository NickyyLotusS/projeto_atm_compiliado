#include <stdio.h>
#include <string.h>
#include <locale.h>

void mostrar_menu() {
    setlocale(LC_ALL, "pt_PT");
    printf("\n");
    printf("  +------------------------------+\n");
    printf("  |   === CAIXA ELETRÔNICO ===   |\n");
    printf("  +------------------------------+\n");
    printf("  |  [1] Ver saldo               |\n");
    printf("  |  [2] Sacar                   |\n");
    printf("  |  [3] Depositar               |\n");
    printf("  |  [4] Histórico               |\n");
    printf("  |  [5] Sair                    |\n");
    printf("  +------------------------------+\n");
    printf("  |  >> Selecione uma opção:     |\n");
    printf("  +------------------------------+\n");
    printf("  ");
}