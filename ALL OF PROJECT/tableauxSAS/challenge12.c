#include<stdio.h>
int main(){
    int P[6];
    int i ;
    
    for (i=0;i<6;i++){
        printf("Veuillez saisir l'element %d : ",i+1);
        scanf("%d",&P[i]);
    }
    
    for (i=0;i<6;i++){
     if (P[i]%2==0)
     printf("----les nombres paires sont---");
    printf ("P[%d]=%.1d\n",i,P[i]);

    }

    return 0;
}