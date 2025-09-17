#include<stdio.h>
void fct_Premier(int N){
    int estPremier=1;
    int i ;
    for (i=2;i<=N/2;i++){
        if (N%i==0){
            estPremier=0;
            break ; 
        }
    }
if (estPremier==1)
printf("--le nombre %d  premier ",N);
else 
printf("--le nombre %d PAS  premier ",N);
}







int main (){
    int N;
    printf("Veuillez saisir un nombre entier :");
    scanf ("%d",&N);
    fct_Premier(N);
    return 0 ; 
}