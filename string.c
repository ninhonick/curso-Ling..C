#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


int main(int argc, char const *argv[])

{
    setlocale(LC_ALL,"Portuguese");
    char bit[50]  ;
    printf("digite sua frase preferida\n");
    strchr(bit, scanf("%50[^\n]s",bit ));
    fflush(stdin);

    printf("%s " , bit );


    return 0;
}

