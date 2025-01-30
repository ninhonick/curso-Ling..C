#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    char bit[50]  ;
    printf("digite sua frase preferida\n");
    scanf (" %49[^\n]s", bit);
    fflush(stdin);

    printf("%s " , bit );


    return 0;
}

