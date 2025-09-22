#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void mover_torre(int casas, char direcao[]) {
    if (casas > 0) {
        printf("\n%s", direcao);
        mover_torre(casas - 1, direcao);
    }
}

void mover_bispo(int casas, char direcao_horizontal[], char direcao_vertical[]) {
    if (casas == 0) return;
    int moveu = 0;
    while (!moveu) {
        printf("\n%s", direcao_vertical);
        do
        {
            printf(", %s", direcao_horizontal);
        } while (moveu);
        moveu = 1;
    }
    mover_bispo(casas - 1, direcao_horizontal, direcao_vertical);
}

void mover_rainha(int casas, char direcao_horizontal[], char direcao_vertical[]) {
    if (casas > 0) {
        if (direcao_vertical == "") {
            printf("\n%s", direcao_horizontal);
        } else if (direcao_horizontal == "") {
            printf("\n%s", direcao_vertical);
        } else {
            printf("\n%s, %s", direcao_vertical, direcao_horizontal);
        }
        mover_rainha(casas - 1, direcao_horizontal, direcao_vertical);
    }
}

void mover_cavalo(char direcao_1[], char direcao_2[]) {
    for (int atual = 0; atual < 2; atual++) {
        printf("\n%s", direcao_1);
        if (atual < 1) continue;
        for (int i = 0; i < 1; i++) {
            printf("\n%s", direcao_2);
        }
        break;
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int movimento_torre = 5, movimento_bispo = 5, movimento_rainha = 8;

    printf("\nMovimento do Bispo:");
    mover_bispo(movimento_bispo, "Direita", "Cima");

    printf("\n\nMovimento da Torre:");
    mover_torre(movimento_torre, "Direita");

    printf("\n\nMovimento da Rainha:");
    mover_rainha(movimento_rainha, "Esquerda", "");

    printf("\n\nMovimento do Cavalo:");
    mover_cavalo("Cima", "Direita");
    
    return 0;
}
