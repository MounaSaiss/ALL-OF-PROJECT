#include<stdio.h>
int main(){
    int N,invers;
    printf("Veuillez saisir un nombre entier  :");
    scanf("%d",&N);
    invers=0;
    do{
        invers=(invers*10)+(N%10);
        N=N/10;
    }while(N!=0);
printf ("inverse = %d",invers);
    return 0;
}