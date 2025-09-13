#include<stdio.h>
int main (){
    int a,b,inevers,N;
    printf("Veuillez saisir un nombre de deux chifres:");
    scanf("%d",&N);
        
   a=N%10;
   b=N/10;
   printf ("%d%d",a,b);


    return 0;
}