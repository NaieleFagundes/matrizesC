//Leia uma matriz 5 x 5. Leia também um valor X. O programa devera fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.

#include <stdio.h>
#include <stdlib.h>

int main (){

    int mat [2][2];
    int linha, coluna, num, LinhaN=0, ColunaN=0;

    for (linha =0; linha < 2 ; linha++) {
        for (coluna = 0; coluna < 2; coluna++){
            printf ("Digite o elemento para a matriz: \n");
            scanf ("%d", &mat[linha][coluna]);

        }
    }
    
    printf ("Qual valor deseja encontrar na matriz? ");
    scanf ("%d", &num);
    int encontrado =0;

    for (linha =0; linha < 2; linha++) {
        for (coluna =0; coluna < 2; coluna++){
            if (mat [linha][coluna] == num){
                LinhaN =linha;
                ColunaN= coluna;
                encontrado = 1;
            } 
           
        }
    printf (" \n");
    }

    if (encontrado == 1 ){
        printf ("O número está na linha %d e na coluna %d \n", LinhaN+1, ColunaN+1);
    } else{
         printf ("O número digitado não foi encontrado");
    }
    
    return 0;
    
}