#include<stdio.h>
int main (){
    float Te[5],Ts[5];
    int i ; 
    for (i=0;i<5;i++){
        printf("Veuillez saisir l'element %d :",i+1);
        scanf("%f",&Te[i]);
    }

    for (i=0;i<5;i++){
        Ts[4-i]=Te[i];
    }
    printf("---Tableaux renverse-----\n");
    for (i=0;i<5;i++)
    printf ("Ts[%d]=%.1f\n",i,Ts[i]);
    return 0;
}