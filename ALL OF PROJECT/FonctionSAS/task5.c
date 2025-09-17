#include<stdio.h>
void compte_nbr(int A){
    int nbr=0;
    do {
       nbr++;
       A=A/10;
    }while(A!=0);
printf ("le nombre des chifre est %d",nbr);
}




int main (){
    int N;
    printf("Veuillez saisir un element :");
    scanf("%d",&N);
    compte_nbr(N);
    return 0;
}