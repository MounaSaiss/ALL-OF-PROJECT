#include <stdio.h>
int main (){
    int N;
    int Invers=0;
    printf("Veuillez saisir un nombre :");
    scanf("%d",&N);
    do {
        Invers=(Invers*10)+(N%10);
        N=N/10;
    }while (N!=0);
    printf("le nombre inverse est :%d",Invers);
    return 0;
}