#include<stdio.h>
int main (){
    int a,i,k;
    printf("Veuillez saisir un nombre :");
    scanf("%d",&a);
    while(a<=1){
        printf("Veuillez saisir un nombre :");
        scanf("%d",&a);
    }
    for(i=1;i<=4;i++){
        k=2*i;
        printf(" %d",k);
    }
    return 0;
}