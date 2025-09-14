#include<stdio.h>
int main (){
    int m,n,r,nu,de,a,b;
    printf("Veuillez saisir la fraction :");
    scanf("%d/%d",&m,&n);
    a=m;
    b=n;
    while(n!=0){
        r=m%n;
        m=n;
        n=r;
    }
    printf("les GCD est :%d\n",m);
    nu=a/m;
    de=b/m;
    printf("la forme plus simple est: %d/%d",nu,de);
    return 0;
}