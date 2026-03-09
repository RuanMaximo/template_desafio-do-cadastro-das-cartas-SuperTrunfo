#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  int i,j;
  char letra;

  for (i = 1;i <= 10; i++) {
    letra = 'A';
    for (j = 1; j <= i; j++) {
      printf("%c ",letra);
      ++letra;
    }
    printf("\n");
  }

} 
