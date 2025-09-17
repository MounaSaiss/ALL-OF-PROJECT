#include<stdio.h>

void max (float Te[]){
    int i;
    float max ;
    max=Te[0];
    for (i=0;i<5;i++){
      if (max < Te[i])
      max=Te[i];
    }
 printf ("le max est %f\n",max);
}

void min (float Te[]){
    int i;
    float min ;
    min=Te[0];
    for (i=0;i<5;i++){
      if (min >Te[i])
     min = Te[i];
    }
 printf ("le min est %f\n",min);
}


void  inverse (float Te[] , float Ts[]){
    int i;
    for (i=0;i<5;i++){
        Ts[4-i]=Te[i];
    }
}




int main (){
    int i ;
    float Te[5] , Ts[5];
    for (i=0;i<5;i++){
        printf("Veuillez saisir l'element %d :",i+1);
        scanf("%f",&Te[i]);
    }
    min(Te);
    max(Te);
    inverse (Te,Ts);
    printf("----le tableau renverse ----");
    for (i=0;i<5;i++){
        printf ("Ts[%d]=%.2f \n",i,Ts[i]);
    }
    return 0;
}