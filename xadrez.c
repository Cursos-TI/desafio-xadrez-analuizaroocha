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

    return 0;
}