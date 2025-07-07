//Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.
 
#include <stdio.h>
#include <stdlib.h>

int main () {

    int mat1 [4][4];
    int mat2 [4] [4];
    int mat3 [4] [4];
    int linha, coluna;
    
    printf ("Digite os elementos da primeira matriz: ");
    for (linha = 0; linha < 4; linha++){
        for (coluna = 0; coluna < 4; coluna++){
            scanf ("%d",&mat1 [linha][coluna]);
        }
    }

    printf ("\n");
    printf ("Digite os elementos da segunda matriz: ");
    for (linha = 0; linha < 4; linha++){
        for (coluna = 0; coluna < 4; coluna++){
            scanf ("%d", &mat2 [linha][coluna]); 
          
        }
    }

    for (linha = 0; linha < 4; linha++) {
       for (coluna = 0; coluna < 4; coluna++) {
           if (mat1[linha][coluna] > mat2[linha][coluna]) {
               mat3[linha][coluna] = mat1[linha][coluna];
           } else {
              mat3[linha][coluna] = mat2[linha][coluna];
           }
        }
    }

    for (linha = 0; linha < 4; linha++){
        for (coluna = 0; coluna < 4; coluna++){
           printf ("%d ", mat3 [linha][coluna]); 
          
        }
        printf ("\n");
    }
return 0;
}
