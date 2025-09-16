#include<stdio.h>
int main (){
    float T[8];
    int i,j; 
    float tmp;
    for (i=0;i<8;i++){
        printf("Veuillez saisir l'element %d de tableaux :",i+1);
        scanf("%f",&T[i]);
    }

    tmp=0;
    for (i=0;i<8;i++){
        for(j=i+1;j<8;j++){
            if(T[i]>T[j]){
                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
            }
        
        }
    }
    printf("---tableaux elements croissant---\n");
    for (i=0;i<8;i++)
    printf ("T[%d]=%.1f\n",i,T[i]);

    return 0 ;
}