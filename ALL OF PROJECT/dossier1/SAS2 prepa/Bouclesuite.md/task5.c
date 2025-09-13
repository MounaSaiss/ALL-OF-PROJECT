#include <stdio.h>
int main (){
    int N,i,k;
    printf("Veuillez saisir un nombre entier:");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        k=2*i;
        printf(" %d",k);
    }

    return 0;
}