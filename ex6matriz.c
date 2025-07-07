//Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.
 
#include <stdio.h>
#include <stdlib.h>

int main () {

    int mat1 [2][2];
    int mat2 [2] [2];
    int mat3 [2] [2];
    int linha, coluna;
    
    printf ("Digite os elementos da primeira matriz: ");
    for (linha = 0; linha < 2; linha++){
        for (coluna = 0; coluna < 2; coluna++){
            scanf ("%d",&mat1 [linha][coluna]);
        }
    }

    printf ("\n");
    printf ("Digite os elementos da segunda matriz: ");
    for (linha = 0; linha < 2; linha++){
        for (coluna = 0; coluna < 2; coluna++){
            scanf ("%d", &mat2 [linha][coluna]); 
          
        }
    }

    for (linha = 0; linha < 2; linha++) {
       for (coluna = 0; coluna < 2; coluna++) {
           if (mat1[linha][coluna] > mat2[linha][coluna]) {
               mat3[linha][coluna] = mat1[linha][coluna];
           } else {
              mat3[linha][coluna] = mat2[linha][coluna];
           }
        }
    }

    for (linha = 0; linha < 2; linha++){
        for (coluna = 0; coluna < 2; coluna++){
           printf ("%d ", mat3 [linha][coluna]); 
          
        }
        printf ("\n");
    }
return 0;
}