#include<stdio.h>
int main (){
    int Nbr=0;
    long N;

    printf("Veuillez saisir un nombre :");
    scanf ("%ld",&N);
    do{
        Nbr++;
        N=N/10;
    }while (N!=0);
    printf ("Nbr = %d",Nbr);
    return 0; 
}