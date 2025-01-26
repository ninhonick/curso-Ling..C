 #include<stdio.h>
 #include<stdlib.h>

 int main(int argc, char const *argv[])
 {
    int Dado =10;

    printf("INCLEMENTO E DECLEMENTO DE VARIAVEIS \n");
    Dado ++;
    printf("depois do inclemento %d.\n" ,Dado);
    Dado --;
    printf("depois do inclemento %d.\n" ,Dado);
    Dado += 3;
    printf("depois do inclemento %d.\n" ,Dado);
    Dado -= 2;
    printf("depois do inclemento %d.\n" ,Dado);
    Dado *=10;
    printf("depois do inclemento %d.\n", Dado);
    Dado /= 2;
    printf("depois do inclemento %d.\n", Dado);
    Dado += 30;
    printf("depois do inclemento %d.\n", Dado);
    Dado += Dado;
    printf("depois do inclemento %d.\n", Dado);
    Dado *= 2;
    printf("depois do inclemento %d.\n" ,Dado);
    return 0;
 }
 