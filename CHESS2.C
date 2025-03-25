#include <stdio.h>

#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8
#define MOVIMENTO_CAVALO 1

// Função recursiva para movimentação do bispo
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Movendo o bispo: Diagonal para cima à direita\n");
        moverBispo(casas - 1);
    }
}

// Função recursiva para movimentação da rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Movendo a rainha: Para a esquerda\n");
        moverRainha(casas - 1);
    }
}

// Função para movimentação da torre
void moverTorre() {
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Movendo a torre: Para a direita\n");
    }
}

// Função para movimentação do cavalo
void moverCavalo() {
    for (int i = 0; i < 1; i++) { // O cavalo se move uma vez
        for (int j = 0; j < 1; j++) { // Loop aninhado
            printf("Movendo o cavalo: Para baixo e para a esquerda\n");
        }
    }
}

int main() {
    // Movimentação do bispo
    printf("Movimentação do Bispo:\n");
    moverBispo(MOVIMENTO_BISPO);
    
    // Movimentação da torre
    printf("\nMovimentação da Torre:\n");
    moverTorre();
    
    // Movimentação da rainha
    printf("\nMovimentação da Rainha:\n");
    moverRainha(MOVIMENTO_RAINHA);
    
    // Movimentação do cavalo
    printf("\nMovimentação do Cavalo:\n");
    moverCavalo();
    
    return 0;
}