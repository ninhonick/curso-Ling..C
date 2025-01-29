#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int v[5];
    int i =0;

    for ( i = 0; i <= 4; i++)
    {
        printf("insira um dado \n");
        scanf ("%d", &v[i]);
    }

    printf("DADOS INSERIDOS: \n");
    
    for ( i = 0; i <= 4; i++)
    {
        printf("%d-- ", v[i]);
        
    }

    return 0;
}
