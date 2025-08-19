#include <stdio.h>

// Funções recursivas

// Torre
void moverTorre(int casas) {
    if (casas <= 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1);  
}

// Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0) return;
    for (int h = 0; h < horizontal; h++) {
        printf("Cima Direita\n");
    }
    moverBispo(vertical - 1, horizontal);
}

int main(void) {
    const int casasTorre = 5;
    const int casasBispoVertical = 5;
    const int casasBispoHorizontal = 1;
    const int casasRainha = 8;
    const int casasCavaloVertical = 2;  
    const int casasCavaloHorizontal = 1; 

    // Movimentação da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimentação do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);

    // Movimentação da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimentação do Cavalo
    printf("\nMovimento do Cavalo:\n");
    for (int v = 0; v < casasCavaloVertical; v++) {
        printf("Cima\n");
    }
    int h = 0;
    while (h < casasCavaloHorizontal) {
        printf("Direita\n");
        h++;
    }

    return 0;
}
