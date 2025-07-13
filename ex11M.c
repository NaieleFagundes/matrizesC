//Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat [3][3];
    int linha, coluna;

    for (linha = 0; linha < 3 ; linha++) {
        for (coluna = 0; coluna < 3; coluna++){
            printf ("Digite o elemento para a matriz: \n");
            scanf ("%d", &mat[linha][coluna]);

        }
    }
    

    for (coluna = 0; coluna < 3; coluna++){
       for (linha= 0; linha < 3; linha++){
           printf ("%d ", mat [linha][coluna]);
       }
       printf (" \n");
    }
   return 0;
}