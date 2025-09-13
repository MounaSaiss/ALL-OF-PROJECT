#include<stdio.h>
int main (){
    int i,N,S;
    printf("Veuiulez saisir un nombre entier :");
    scanf("%d",&N);
    S=0;
    for (i=1;i<=N;i++){
     S=S+i;
    }
printf("la somme est : %d",S);
    return 0;
}