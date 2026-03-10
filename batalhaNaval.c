#include <stdio.h>

int main() {
    char letra = 'A';
    int matriz[10][10] = {{0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,3,3,3,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,3,0,0},
                         {0,0,0,0,0,0,0,3,0,0},
                         {0,0,0,0,0,0,0,3,0,0},
                         {0,0,0,0,0,0,0,0,0,0}};

printf("TABULEIRO BATALHA NAVAL\n");
printf("  ");
for (int h = 0;h < 10; h++){
    printf("%c ",letra);
    letra ++;
}

printf("\n");

for (int i = 1; i <= 10; i++ ) {
    printf("%d ",i);
    for (int j = 0;j <10; j++) {
        printf("%d ",matriz[i-1][j]);
    }
    printf("\n");    
}
printf("\n\n");
} 