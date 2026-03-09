#include <stdio.h>

int main() {
    char * nomesAlunos[3][20] = {{"aluno 1","pt: 30","Mat: 90"},{"aluno 2","pt: 40","mat:100"},{"aluno 3","pt: 90","mat:80"}};
    int entrada;

    printf("digite o numero do aluno:\n");
    scanf("%d",&entrada);

    printf("%s, %s ,%s \n",nomesAlunos[entrada][0],nomesAlunos[entrada][1],nomesAlunos[entrada][2]);
}