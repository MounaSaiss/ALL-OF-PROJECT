#include<stdio.h>
int main (){
    float T[10];
    int i;
    float M,nbr,S;
    for(i=0;i<10;i++){
        printf("Veuillez saisir l'element %d :",i+1);
        scanf("%f",&T[i]);
    }
    /*calculer first la somme */
    S=0;
    for (i=0;i<10;i++){
        S=S+T[i];
    }
    M=S/10;

    nbr=0;
    for (i=0;i<10;i++){
        if (T[i]>M)
        nbr=nbr+1;
    }

    printf ("nombre des note superieur au moyenne sont : %.2f",nbr);

    return 0;
}