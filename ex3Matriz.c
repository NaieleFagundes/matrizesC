//Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da coluna de cada elemento. 
//Em seguida, imprima na tela a matriz. 

#include <stdio.h>
#include <stdlib.h>

int main (){

    int tam = 4;
    int mat [tam][tam];
    int linha, coluna; 

    for (linha =0; linha < tam ; linha++) {
        for (coluna =0; coluna < tam; coluna++){
            mat[linha][coluna] = rand()% 100;
        }
    }
    
     for (linha =0; linha < tam; linha++) {
        for (coluna =0; coluna < tam; coluna++){
            
            printf ("%d ", mat[linha][coluna]);
        }
        printf (" \n");
    }
    
    return 0;
    
}