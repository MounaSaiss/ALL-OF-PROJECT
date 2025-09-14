#include<stdio.h>
int main (){
    float V[3],W[3];
    int i,j;
    float Ps;
    for(i=0;i<3;i++){
        printf("Veuillez saisir l'elements %d de V :",i+1);
        scanf ("%f",&V[i]);
    }
     for(i=0;i<3;i++){
        printf("Veuillez saisir l'elements %d de W :",i+1);
        scanf ("%f",&W[i]);
    }
 Ps=0;
 for (i=0;i<3;i++)
  Ps=Ps+(V[i]*W[i]);
  printf("le produit scalaire est :%f",Ps);
    return 0;
}