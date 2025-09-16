#include<stdio.h>
int main (){
    float Te[5],Ts[5];
    int i; 
    for (i=0;i<5;i++){
        printf("Veuillez saisir l'element %d :",i+1);
        scanf("%f",&Te[i]);
    }


for (i=0;i<5;i++){
    Ts[i] = Te[i];   
}

   
printf ("----Tableau copier ----\n");
for (i=0;i<5;i++)
printf("T[%d]=%.1f\n",i,Ts[i]);
    return 0; 
}