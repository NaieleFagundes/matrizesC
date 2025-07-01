
#include <stdio.h>

int main()
{
   int mat [4][4];
   int c, i, dp;
   
   for (c = 0; c < 4; c++){
       for ( i= 0; i < 4; i++){
           if (c == i ){
               mat [c][i] = 1;
               
           } else {
               mat [c][i]=0;
           }
           
       }
       
   }
   
   
  for (c = 0; c < 4; c++){
       for ( i= 0; i < 4; i++){
           printf ("%d ", mat [c][i]);
      
       }
       printf ("\n");
  }
           

    return 0;
}