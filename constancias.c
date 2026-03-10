#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    char matriz[LINHAS][COLUNAS];
    int soma = 0;

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {

            soma ++;
            matriz[i][j] = soma;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}