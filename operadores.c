  #include <stdlib.h>
  #include <stdio.h>

  int main(int argc, char const *argv[])
  {
    int A,B,soma,divis,subtr,mult;

    printf("Digite o primeiro numero: \n");
    scanf( "%d",&A);
    printf("Digite o segundo numero: \n");
    scanf( "%d",&B);

    soma = A + B;
    subtr = A - B;
    divis = A / B;
    mult = A * B;

    printf("--------------------\n");
    printf("Resultados :\n");
    printf("--------------------\n");
    printf("**soma --------------> : %d.\n", soma);
    printf("**subtracao----------> : %d.\n", subtr);
    printf("**divisao------------> : %d.\n", divis);
    printf("**multiplicacao------> : %d.\n", mult);
    printf("--------------------\n");
   
    return 0;
  }
  