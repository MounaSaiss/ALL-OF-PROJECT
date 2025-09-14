#include <stdio.h>
int main (){
    float T[10];
    int i,nbr,N;

    for (i=0;i<10;i++){
        printf("Veuillez saisir l'element %d :",i+1);
        scanf("%f",&T[i]);
    }
    
    printf("Veuillez saisir un element :");
    scanf("%d",&N);

    nbr=0;
    for (i=0;i<10;i++){
        if(N==T[i]){
        nbr=nbr+1;}
    }
    printf("%d est rpeter %d fois",N,nbr);

    return 0;
}