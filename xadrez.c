#include <stdio.h>

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

    // --- Movimentação do Cavalo (Nível Aventureiro) ---
    // Note que agora ele está ANTES do único return 0;
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 1; i++) {
        int j = 0;
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");
    }

    return 0;
}