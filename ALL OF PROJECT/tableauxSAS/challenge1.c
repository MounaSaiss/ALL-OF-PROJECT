#include<stdio.h>
int main (){
    float  T[5];
    int i ;
    for (i=0;i<5;i++){
         printf("Veuillez saisir l'element %d : ",i+1);
         scanf("%f",&T[i]);
    }

    for (i=0;i<5;i++){
        printf ("%.1f \n",T[i]);
    }
    
    return 0; 
}