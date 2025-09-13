#include<stdio.h>
int main (){
    int i,n,UPP,UP,U;
    printf("Veuillez saisir un nombre :");
    scanf("%d",&n);
    while(n<2){
      printf("Veuillez saisir un nombre :");
      scanf("%d",&n);  
    }
    UPP=0; 
    printf(" U0=%d \n",UPP);
    UP=1;
    printf(" U1=%d \n",UP);
    for (i=2;i<=n;i++){
    U=UPP+UP;
    printf (" U%d=%d \n",i,U);
    UPP=UP;
    UP=U;
    }
return 0;
}
