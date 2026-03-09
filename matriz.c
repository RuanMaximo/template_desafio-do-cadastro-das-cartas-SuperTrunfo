#include <stdio.h>

int main() {
    // int lista[5] = {1,2,3,4,5}; 
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for (int coluna=0; coluna < 3; coluna++) {
        for (int linha=0; linha < 3; linha++) {
            printf("o elemento na posição[%d][%d] é %d. \n",coluna,linha,matriz[coluna][linha]);
        }
    }
}