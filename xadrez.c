#include <stdio.h>

// Função recursiva para movimentar a Torre para a direita
void moverTorre(int casas) {
    if (casas <= 0) return; // Caso base da recursão
    printf("Direita\n");     
    moverTorre(casas - 1);   
}

// Função recursiva para movimentar a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");    
    moverRainha(casas - 1);
}

// Função para movimentar o Bispo com loops aninhados (externo vertical, interno horizontal)
// Imprime "Cima" e "Direita" para simular movimento diagonal
void moverBispo(int casas) {
    for (int vertical = 0; vertical < casas; vertical++) {
        for (int horizontal = 0; horizontal < casas; horizontal++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

// Função para movimentar o Cavalo com loops aninhados e controle com break/continue
// Movimento: 2 casas para cima e 1 para direita (em "L")
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;
    int movimentoCimaContador = 0;
    int movimentoDireitaContador = 0;

    for (int v = 0; v < 4; v++) {
        if (movimentoCimaContador >= movimentosVerticais) break;

        for (int h = 0; h < 2; h++) {
            if (movimentoDireitaContador >= movimentosHorizontais) break;

            printf("Cima\n");
            movimentoCimaContador++;

            if (movimentoCimaContador == movimentosVerticais) {
                printf("Direita\n");
                movimentoDireitaContador++;
                break;
            }
        }
    }
}

int main() {
    const int casasBispo = 3;
    const int casasTorre = 5;
    const int casasRainha = 8;

    printf("Movimento do Bispo\n");
    moverBispo(casasBispo);
    printf("\n");

    printf("Movimento da Torre\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento da Rainha\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("Movimento do Cavalo\n");
    moverCavalo();
    printf("\n");

    return 0;
}
