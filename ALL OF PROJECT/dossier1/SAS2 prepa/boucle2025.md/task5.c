#include<stdio.h>
int main (){
    int m,n,r;
    printf ("Veillez saisir les deux entier :");
    scanf("%d %d",&m,&n);
    while (n!=0){
        r=m%n;
        m=n;
        n=r;
    }
    printf ("le PGCD est :%d",m);
    return 0; 
}