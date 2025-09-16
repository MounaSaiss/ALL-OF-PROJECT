#include<stdio.h>
int main (){
    float T[6];
    int i ;
    float N;
    int trouve=0;
    for(i=0;i<6;i++){
        printf("Veuillez saisir l'element %d :",i+1);
        scanf("%f",&T[i]);
    }

    printf("---Veuillez saisir un element ---- :\n");
    scanf("%f",&N);
    
    for(i=0;i<6;i++){
        if (T[i]==N){
        printf ("* l'element existe *");
        trouve=1;
        break ;
        }     
    }
    if (trouve!=1){
          printf(" *l'element n'existe pas* ");
    }

    return 0;
}