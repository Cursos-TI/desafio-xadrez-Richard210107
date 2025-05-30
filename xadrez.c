#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
int Bispo = 5;
int Torre = 5;
int Rainha = 8;


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
  int i = 0;
  printf ("Movimento do Bispo\n");
  while (i < Bispo)
 { printf ("Cima,Direita\n");
     i++;

  }

  printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

printf("Movimento Da Torre\n");
  for(int J = 0; J < Torre; J++)
   { printf("Direita\n");
 
}


printf("\n");



    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

printf("movimento da rainha\n");
int k=0;
do   {

printf("esquerda\n");
k++;


} while( k < Rainha);


printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimento do Cavalo\n");

    // Definindo o número de movimentos
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    // Primeiro loop: movimento vertical (baixo) - usando for
    for (int l = 0; l < movimentosBaixo; l++) {
        printf("Baixo\n");

        // Loop aninhado: aqui só simula uma ação de verificação ou movimento intermediário
        // utilizando while conforme instruído
        int m = 0;
        while (m < 1) {
        
            m++;
        }
    }

    // Após mover duas casas para baixo, move uma casa para a esquerda
    int n = 0;
    while (n < movimentosEsquerda) {
        printf("Esquerda\n");
        n++;
    }





















    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;


}
