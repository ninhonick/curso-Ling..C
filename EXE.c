#include<stdio.h>|
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int seg , Hr,Mn ,segS, restD  ;

    printf("digite o tempo do cronometro em segundos:\n");
    scanf("%d", &seg);

   if (seg > 0 & seg < 60)
   {
     printf("Temos %d segundos marcados no cronometro\n", seg);
     printf("00:00:%d",seg);
    }else if (seg > 59 & seg < 3600)
    {
        Mn = seg/60;
        segS= seg % 60;
        printf("Temos %d minutos e  %d segundos marcados no cronometro\n", Mn, segS);
        printf("00:%d:%d",Mn,seg);
        
      }else 
      
      {
        
        Hr = seg/3600;
        restD = seg % 3600;
        Mn = restD / 60;
        segS = restD % 60;
        printf("Temos %d Hora(s) e  %d minutos e %d segundos  marcados no cronometro\n" , Hr, Mn, segS);
        printf("%d:%d:%d",Hr,Mn,segS);
      }
return 0;
}
