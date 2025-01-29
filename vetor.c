#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    int V [5];
    float media ;

    V[0]= 50;
    V[1]= 40;
    V[2]= 30;
    V[3]= 20;
    V[4]= 10;
     media = (V[0] + V[1] + V[2] + V[3] + V[4] ) / 5;

     printf ("resultado : %2.f \n " , media);
    

    return 0;
}
