 #include <stdio.h>
 #include <stdlib.h>

 int idade = 0;
 float peso = 0.0;

 int main (){

 printf("digite sua idade :\n");

 scanf( "%d", &idade );

 printf( "digite seu peso :\n");
 scanf( "%f", &peso);


 printf("sua idade e: %d anos. e voce pesa : %3.f kilos \n ", idade ,peso );


}
