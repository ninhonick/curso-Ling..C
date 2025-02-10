#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct Pessoa
{
    int idade;
    char nome[30];
    int matricula; 
};

struct curso
{
  int codigo,cargaHr;
  char nome[20];
  float mensalidade;
  struct Pessoa Professor;

};

struct Diciplinas 
{
    char nome[20];
    int cargaH;
};

typedef struct Pessoa prof;
typedef struct Diciplinas displ;
typedef struct curso curso;

 








int main(int argc, char const *argv[]){

   curso curso[20];
    
   strcpy (curso[0].nome , "backend");
   strcpy (curso[1].nome , "frontend");
   strcpy (curso[2].nome , "database");
   strcpy (curso[3].nome , "Gir-github");
   
   strcpy (curso[0].Professor.nome , "Lobato ");

   curso[0].cargaHr = 380;
   curso[1].cargaHr = 380;
   curso[2].cargaHr = 180;
   curso[3].cargaHr = 890;

   

   

    printf("----------- Bem vindo a Escola de referencia ------------- \n");
    printf("--------------------------------------------------------- \n");

    printf( "Voce esta matriculado no curso: ---> %s \n ",  curso[0].nome);
     printf("Com carga horaria de:-------------> %d horas  \n ",  curso[0].cargaHr);
     printf(" o curso de %s tem como profesor sr %s e tem carga horaria de %d horas \n", curso[0].nome,curso[0].Professor.nome,curso[0].cargaHr);
    
    return 0;
}

  
  

 


   
    




    
     
     

    
    
    

