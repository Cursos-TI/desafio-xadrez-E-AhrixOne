#include <stdio.h>

//Declaração de variaveis

int main(void) {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int casasBaixo = 2;
    const int casasEsquerda = 1;

// Movimentação da Torre

    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

// Movimentação do Bispo

    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

// Movimentação da Rainha

    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

// Movimentação do Cavalo

    printf("\nMovimento do Cavalo:\n");
    for (int k = 0; k < casasBaixo; k++) {
        printf("Baixo\n");
    }
    int m = 0;
    while (m < casasEsquerda) {
        printf("Esquerda\n");
        m++;
    }

//  Finalizar Execução

    return 0;
}
