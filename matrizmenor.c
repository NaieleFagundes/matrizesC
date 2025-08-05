
//Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros.
//Ao final da leitura o programa deverá imprimir o número da linha 
//que contém o menor dentre todos os números lidos.
#include <stdio.h>

int main()
{
    int mat [2][2];
    int i, j, menor, menorLinha;
    
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
             printf ("Digite o elemento para a matriz: ");
             scanf ("%d", &mat[i][j]);
        }
        if (i == 0 && j == 0){
            menor = mat [i][j];
        }
        printf ("\n");
    }


    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
             printf ("%d ", mat [i][j]);
        }
        if (mat [i][j] < menor){
            menorLinha = mat [i][j];
        }
        printf ("\n");
    }
    
    printf ("O menor número está na linha %d", menorLinha);
    return 0;
}