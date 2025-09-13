#include<stdio.h>
int main(){
    int N,M;
    int Invers;
    printf("Veuillez saisir un nombre :");
    scanf("%d",&N);
    Invers=0;
    M=N;
    do{
       Invers=(Invers*10)+(N%10);
       N=N/10;
    }while(N!=0);
    printf("Inverse = %d\n",Invers);

    if (M==Invers)
    printf("est palindrome");
    else 
    printf("  pas palindrome ");
    return  0;
}