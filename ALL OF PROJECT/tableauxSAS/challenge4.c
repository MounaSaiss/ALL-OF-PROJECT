#include<stdio.h>
int main (){
    float T[5];
    int i ;
    float Min ;
    for (i=0;i<5;i++){
        printf ("Veuillez saisir l'element %d :",i+1);
        scanf("%f",&T[i]);
    }

    Min=T[0];
    for (i=0;i<5;i++){
        if(T[i]<Min)
        Min = T[i];
    }
    printf("le minimum est : %.1f",Min );
    return 0;
}
