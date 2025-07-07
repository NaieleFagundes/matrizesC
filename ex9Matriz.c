// Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da diagonal principal. 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat [3][3];
    int soma=0,linha, coluna;

    for (linha =0; linha < 3 ; linha++) {
        for (coluna = 0; coluna < 3; coluna++){
            printf ("Digite o elemento para a matriz: \n");
            scanf ("%d", &mat[linha][coluna]);

        }
    }
    

    for (linha = 0; linha < 3; linha++){
       for ( coluna= 0; coluna < 3; coluna++){
           if (linha == coluna){
               soma += mat [linha][coluna];
           } 
       }
       printf ("\n");
   }
   printf ("A soma é %d", soma);
   return 0;
}