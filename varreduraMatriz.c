#include <stdio.h>
#include <stdbool.h>

void main() {
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    bool found = false;
    int numero = 7;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == numero) {
                printf("numero %d encontrado na posição[%d][%d]. \n",numero,i,j);
                found = true;
                break;
            }
        } if (found == true) {
            break;
        }
    }
    if (!found) {
        printf("numero %d não encontrado na matriz.\n",numero);
    }
}