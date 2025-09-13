#include<stdio.h>
int main (){
    int X,i,P;
    printf("Veuillez saisir un nombre :");
    scanf("%d",&X);
    for (i=1;i<=10;i++){
      P=X*i;
      printf("%d * %d = %d \n",X,i,P);
    }
    return 0;
}