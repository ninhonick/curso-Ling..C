#include <stdlib.h>
  #include <stdio.h>

  int main(int argc, char const *argv[]){

    int i = 1;
    int tab = 0;
    int R = 0;

    printf("digite o numero que deseja ver atabuada :");
    scanf("%d",&tab);

    while (i <= 10)
    {
        R = i * tab;
        printf( "%d x %d = %d \n" ,tab,i,R);
        printf("-----------\n");

        i ++;

        
    }
    


     return 0;
  }
  