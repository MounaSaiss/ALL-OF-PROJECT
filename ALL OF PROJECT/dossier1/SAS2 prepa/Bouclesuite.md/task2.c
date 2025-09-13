#include<stdio.h>
int main (){
    int N,PF,i;
    printf("Veuillez saisir un nombre  positif non nul:");
    scanf("%d",&N);
    while(N<=0){
         printf("Veuillez saisir un nombre  positif non nul:");
        scanf("%d",&N);
    }
    PF=1;
    for (i=1;i<=N;i++){
        PF=PF*i;
    }
    printf("Produit factoriel = %d",PF);
    return 0 ;
}