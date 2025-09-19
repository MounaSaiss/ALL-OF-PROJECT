#include<stdio.h>
int main (){
    float TE[6],TS[6];
    int i ;
    for (i=0;i<6;i++){
        printf("Veuillez saisir l'element %d de tableaux :",i+1);
        scanf ("%f",&TE[i]);
    }

    /*Inverse les elements de tableaux */
    for (i=0;i<6;i++){
        TS[5-i]=TE[i];
    }
    /*Affichage de tableau*/
    printf("----linversement de tableau -----\n");
    for (i=0;i<6;i++){
         printf("l'element %d de tableaux est :%.2f\n",i+1,TS[i]);
    }
    

    return 0;
}