#include <stdio.h>
int main (){
    int x,i,pf;
    printf("Veuillez saisir un nombre entier positif:");
    scanf("%d",&x);
    while(x<=0){
     printf("Veuillez saisir un nombre entier positif:");
    scanf("%d",&x);  
    }
    pf=1;
    for(i=1;i<=x;i++){
        pf=pf*i;
    }
    printf ("le produit factoriel est :%d",pf);
    return 0;
}