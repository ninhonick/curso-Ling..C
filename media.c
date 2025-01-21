#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char nome [50];
   float n1,n2,n3,n4 = 0;
   float soma , media = 0;

   printf("--------------------------------------------- \n");
   printf("ola seja bem-vindo(a) ao seu calculador de media \n");
   printf("--------------------------------------------- \n");

   printf("Digite  seu nome \n : "),
   scanf("%s",&nome);

   printf("Digite sua Primeira nota : \n"),
   scanf("%f",&n1);

   printf("Digite sua Segunda  nota : \n "),
   scanf("%f",&n2);

   printf("Digite sua Terceira nota : \n"),
   scanf("%f",&n3);

   printf("Digite sua Quarta nota : \n"),
   scanf("%f",&n4);

   soma = n1 + n2 +n3 + n4;
   media = soma / 4 ;

   if (media >= 7){
    printf(" %s ! \n", nome);
    printf( "Sua media e :   %2.f \n" ,media );
    printf(" e voce esta APROVADO, PARABENS!!!! \n");
   }
     else if (media< 7 && media >=5 ){
    printf(" %s ! \n", nome);
    printf( "Sua media e :   %2.f \n",  media );
    printf(" e voce esta Recuperacao, Vamos estudar!!!! \n");
     }
    else
    {
    printf(" %s ! \n", nome);
    printf( "Sua media e :   %2.f \n",  media );
    printf(" e voce esta Reprovado, Nao desista!!!! \n");
        
    }
    
     
       
    
    
   

  
    return 0;
}
