//Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

#include <stdio.h>
int main()
{
    int m[4][4];
    int i,j;
    int cont=0;
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf ("Digite os valores: ");
            scanf("%d",&m[i][j]);
        }
    }
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf(" %d ", m[i][j]);
            if(m[i][j] > 10){
               cont++;
            }
        }
        
        printf(" \n ");
    }
    
    printf("A quantidade de valores 10 é: %d",cont);
    return 0;
}
