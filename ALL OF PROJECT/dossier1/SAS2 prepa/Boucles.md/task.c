#include<stdio.h>
int main (){
int x,S,i;
do{
    printf("Veuillez saisir un nombre:");
    scanf("%d",&x);
}while(x<=1);
S=0;
for (i=1;i<=x;i++){
    S=S+i;
}
 printf("la somme est:%d",S);
    return 0; 
}