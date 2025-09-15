#include<stdio.h>
int main() {
    float T[20];
    int i ;
    float S;
    
    S=1000;
    for (i=0;i<20;i++){
        S=S+(S*0.02);
        T[i]=S;
    }
    printf ("la somme qui doit etre dans le compte apres 20 ans est :%.2f ",S);
    return 0;
}