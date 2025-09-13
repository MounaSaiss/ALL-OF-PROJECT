#include<stdio.h>
int main(){
    int nbr,n;
    printf("Veuillez saisir le nombre :");
    scanf("%d",&n);
    nbr=0;
    do{
      nbr++;
      n=n/10;
    }while(n!=0);
    printf("nombre des chiffres est : %d",nbr);
    return 0;
}