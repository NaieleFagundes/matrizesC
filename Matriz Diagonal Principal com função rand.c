// Leia uma matriz de 4 x 4 elementos.
//Preencha a matriz com dados aleatóres o e calcule a soma dos elementos que estao
//abaixo da diagonal principal.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat [4][4], i, j, soma =0;
    
    for (i = 0; i < 4; i++){
         for (j = 0; j < 4; j++){
            mat [i][j]= rand()%100;
        }
    }
    
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
              printf ("%d ", mat [i][j]);
           if (i > j){
              soma+= mat [i][j];
            }
        }
        printf ("\n");    
    }
   
   
    printf ("A soma dos elementos abaixo da Diagonal Principal é %d ",soma);
    return 0;
}
