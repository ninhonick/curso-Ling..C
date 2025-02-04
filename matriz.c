#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int j,i ;
   int mat [4][3]= {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

   for ( i = 0; i <=3; i++)
   {
    for ( j = 0; j <= 2; j++)
    {
        printf("o valor do indici %d.%d --> %d \n " , i,j,mat[i][j]);
    }
    
   }
   
    return 0;
}
