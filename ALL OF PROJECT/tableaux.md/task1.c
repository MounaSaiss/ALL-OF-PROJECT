#include<stdio.h>
int main (){
    float T[4];
    int i;
    float M,S;
    for (i=0;i<4;i++){
        printf("Veuillez saisir la node de etudian %d ",i+1);
        scanf("%f",&T[i]);
    }
     S=0;
    for (i=0;i<4;i++){
    S=S+T[i];
    }
    M = S/4;
    printf("la moyenne est : %f",M);
    return 0;
}