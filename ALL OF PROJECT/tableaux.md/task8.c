#include<stdio.h>
int main (){
float T[10];
int i;
float N;
int trouve = 0;

for (i=0;i<10;i++){
    printf("Veuillez saisir l'element %d :",i+1);
    scanf("%f",&T[i]);
}

printf("---Veuillez saisir un nombre : ");
scanf("%f",&N);

for (i=0;i<10;i++){
    if (N=T[i]){
    trouve =1;
    break; 
    }
    
}
if (trouve==1)
 printf("valeur se trouve dans le tableau ");
else 
 printf("valeur ne se trouve pas sur le tableau");
    
    return 0;
}