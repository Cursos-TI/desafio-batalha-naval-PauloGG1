#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Desafio Novato
// Teste PauloGG1

// tamanho do tabuleiro e navio para facilitar
#define TAM_TABULEIRO 10 
#define TAM_NAVIO 3

int main() {
int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

// Vetores unidimensionais que representam os navios com valores 3

int navioH[TAM_NAVIO] = {3, 3, 3}; // Navio da horizontal
int navioV[TAM_NAVIO] = {3, 3, 3}; // Navio da vertical


// Coordenadas iniciais dos navios 
int linhaNavioH = 2, colunaNavioH = 1;
int linhaNavioV = 5, colunaNavioV = 7;

// Posicionamento do navio horizontal
printf("Coordenadas do navio horizontal:\n");
for (int i = 0; i < TAM_NAVIO; i++) {
int x = linhaNavioH;
int y = colunaNavioH + i;

// Verifica se está dentro dos limites e se esta livre a posição
if (y < TAM_TABULEIRO && tabuleiro[x][y] == 0) {
tabuleiro[x][y] = navioH[i];
printf("(%d, %d)\n", x, y);
} else {
printf("Posição inválida ou ocupada: (%d, %d)\n", x, y);
}
}




