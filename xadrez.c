#include <stdio.h>

/**
 * Desafio de Xadrez - Nível Novato
 * Objetivo: Simular a movimentação de peças usando loops.
 * Aluna: Ana Luiza Rocha - Newton Paiva
 */

int main() {
    // Variáveis para o número de casas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // --- Movimentação da Torre (Usando FOR) ---
    printf("Movendo a Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Movimentação do Bispo (Usando WHILE) ---
    printf("Movendo o Bispo:\n");
    int b = 0;
    while (b < casasBispo) {
        printf("Cima, Direita\n");
        b++;
    }
    printf("\n");

    // --- Movimentação da Rainha (Usando DO-WHILE) ---
    printf("Movendo a Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < casasRainha);

    return 0;
}#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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

    return 0;
}
