#include<stdio.h>
int main (){
    float T[10];
    int i;
    long S,M,P;
    for (i=0;i<10;i++){
        printf("Veuillez saisir la valeur %d :",i+1);
        scanf("%f",&T[i]);
    }
    S=0;
    P=1;
    for (i=0;i<10;i++){
        S=S+T[i];
        P=P*T[i];
    }
    M=S/10;
    printf("la somme est : %ld/n",S);
    printf("le produit est : %ld /n",P);
    printf("le moyenne est :%ld /n",M);

    return 0;
}