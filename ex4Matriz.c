// Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.

#include <stdio.h>
#include <stdlib.h>

int main (){

    int mat [4][4];
    int maior = 0;
    int linha, coluna;
    int maiorLinha = 0, maiorColuna = 0;

    for (linha =0; linha < 4 ; linha++) {
        for (coluna = 0; coluna < 4; coluna++){
            printf ("Digite o elemento para a matriz: ");
            scanf ("%d", &mat[linha][coluna]);

        }
    }
    
    for (linha =0; linha < 4; linha++) {
        for (coluna =0; coluna < 4; coluna++){
           printf ("%d ", mat[linha][coluna]);
           if (mat[linha][coluna] > maior) {
              maior = mat[linha][coluna];
              maiorLinha = linha;
             maiorColuna = coluna;
           }
        }
    printf (" \n");
    }
    
    printf ("O maior valor está na linha %d e na coluna %d \n", maiorLinha+1, maiorColuna+1);
    
    return 0;
    
}