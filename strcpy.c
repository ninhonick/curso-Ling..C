#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Potuguese");

    char nome [30];
    char nm [30] = "Alexandre Gostosinho";

    
    strcpy(nome, nm );

    printf("Seu nome é : %s", nome);
    
    return 0;
}
