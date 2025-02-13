#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float salario, P_aumento, slTotal, aumentR ;

     printf("Ola!!, digite seu salario atual :\n");
     scanf("%f", &salario);
     printf("Muito bem!! agora digite o percentual de aumento concedido: \n");
     scanf("%f", &P_aumento);
     

     aumentR = (salario * P_aumento) / 100;
     slTotal = aumentR + salario;

     printf("------------------------------------------------------------- \n");
     printf(" Voce recebeu $%.2f Reais de aumento no seu salario\n", aumentR );
     printf(" Agora seu novo salario e : $%.2f Reais \n", slTotal );
     printf("------------------------------------------------------------- \n");
     printf("---------------------Programa finalizado----------------------\n");
      

    
    return 0;
}

