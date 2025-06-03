#include <stdio.h>

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

    printf("\n---- Inicio de Movimentações das Peças do Xadrez ----\n");

    // Movimentação para a Torre

    int t;

    printf("\nMovimento da Torre - 5 casas para a direita\n\n");

    for (t = 1; t <= 5; t++) {
        printf("Direita\n");
    }

    // Movimentação para o Bispo

    int b = 1;

    printf("\nMovimento do Bispo - 5 casas para cima e a direita\n\n");

    do {
        printf("Acima => Direita\n");
        b++;
    } while (b <= 5);

    // Movimentações para a Rainha

    int r = 1;

    printf("\nMovimento da Rainha - 8 casas para a esquerda\n\n");

    while (r <= 8) {
        printf("Esquerda\n");
        r++;}
    
    printf("\n--- Fim de Movimentos ---\n");

    return 0;
}
