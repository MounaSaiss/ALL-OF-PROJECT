#include<stdio.h>
int main (){
    float Te[5],Ts[5];
    int i;
    float F;

    for (i=0;i<5;i++){
        printf ("Veuillez saisir l'element %d :",i+1);
        scanf("%f",&Te[i]);
    }


    printf("Veuillez saisir un facteur :");
    scanf ("%f",&F);
    
 printf ("---Tableaux Multiplication---\n");
    for (i=0;i<5;i++){
        Ts[i]=F*Te[i];
       
        printf ("T[%d]=%.1f\n",i,Ts[i]);
    }
    return 0; 
}