#include<stdio.h>
int main (){
    float T[10];
    int i ;
    float max;
    for (i=0;i<10;i++){
        printf("Veuillez saisir le nombre %d :",i+1);
        scanf("%f",&T[i]);
    }
    max=T[0];
   
        for (i=1;i<10;i++){
            if (max < T[i])
             max=T[i];
        }
   
    printf ("max = %.2f ",max);
    return 0;
}