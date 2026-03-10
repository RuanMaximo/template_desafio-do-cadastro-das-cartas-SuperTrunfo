#include <stdio.h>

int main() {
    char letra = 'A';
    int matriz[10][10] = {
                         {0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0}};

printf("TABULEIRO BATALHA NAVAL \n");
printf("  ");
// insere as letras do tabuleiro.
for (int h = 0;h < 10; h++){
    printf("%c ",letra);
    letra ++;
}
printf("\n"); //desce uma linha apos as letras.

// marca na diagonal
int x = 9;
//int y = 0;
for (int linha = 0;linha < 10;linha++) {
    for (int coluna = 0; coluna < 10; coluna ++) {
        if (linha == coluna) {
            matriz[x][coluna] = 3;
            matriz[linha][coluna] = 3;
            x --;
            //y ++;
        }
    }
}

// exibe a matriz com os indices das linhas.
for (int i = 0; i < 10; i++ ) {
    printf("%d ",i);
    for (int j = 0;j < 10; j++) {
        printf("%d ",matriz[i][j]);
    }
    printf("\n");    
}
printf("\n\n"); // espaço para o final do processo.
} 