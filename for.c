#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i , count , div ,par,imp ;
    int cont = 0;

    printf("contar ate quanto boy? ------>>");
    scanf("%d" ,&count);
    printf("e agora! qual o numero vc quer que apareça os seus multiplos\n");
    scanf("%d",&div );

    for( i = 1; i<= count; i++ ){



        if (i% div == 0 ){
           cont ++;
           if (i% 2 == 0){
            par ++;
             }
              else{
                imp ++ ;
              }
           } 
              
         printf("%d -- ", i);
           continue;
    }
        }
                              

         
             
         printf (" >> Total de ( %d ) multiplos de %d \n" , cont , div);
         printf("------------------------------------------------\n");
         
         
    
    return 0;
}