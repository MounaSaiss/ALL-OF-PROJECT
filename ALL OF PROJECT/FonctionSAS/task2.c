#include<stdio.h>

float  cube(int a){
    float C;
    C=a*a*a;
    return C;
}



int main (){
    int N;
    printf("Veuillez saisir un element :");
    scanf("%d",&N);
     printf ("le cube de %d est : %.2f",N,cube(N));
    return 0;
}