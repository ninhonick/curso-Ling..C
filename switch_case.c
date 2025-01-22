#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
   int D = 0;

   printf("Digite um numero de 1 a 7 \n");
   scanf("%d", &D);

   switch (D)
   {
   case 1:
    printf("Domingo");
    break;
   case 2:
    printf("Segunda");
    break;
   case 3:
    printf("Terca");
    break;
   case 4:
    printf("Quarta");
    break;
   case 5:
    printf("Quinta");
    break;
   case 6:
    printf("Sexta");
    break;
   case 7:
    printf("Sabado");
    break;
   
   default:
    printf("numero invalido!!");
    break;
   }
    return 0;
}
