#include<stdio.h>
int main (){
    int i,x,p;
    printf("Veuillez saisir un nombre :");
    scanf("%d",&x);
    for(i=1;i<=10;i++){
        p=i*x;
        printf("%d * %d = %d\n",x,i,p);
    }
    return 0;
}