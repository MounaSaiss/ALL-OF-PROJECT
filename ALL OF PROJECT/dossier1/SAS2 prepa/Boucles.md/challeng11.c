#include<stdio.h>
int main (){
    int  n,i,estpremier;
    printf("Veuillez saisir un nombre n :");
    scanf("%d",&n);
    estpremier==1;
    for(i=2;i=n/2;i++){
        if (n%i==0)
        estpremier==0;
        break;
    }
    if(estpremier==1)
    printf("est un nombre premier");
    else 
    printf("pas un nombre premier ");
    return 0;
}