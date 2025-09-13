#include<stdio.h>
int main (){
    int x,i,s;
    printf("Veuillez saisir un nombre entier :");
    scanf("%d",&x);
    while (x<1){
      printf("Veuillez saisir un nombre entier :");
    scanf("%d",&x);   
    }
    s=0;
    for(i=1;i<=x;i++){
        s=s+i;
    }
    printf("la somme est : %d",s);
    return 0; 
}