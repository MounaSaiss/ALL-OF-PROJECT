#include<stdio.h>
float factoriel (int A){
    int i;
    float F;
    F=1;
    for (i=1;i<=A;i++){
        F=F*i;
    }
return F;
}



 int main (){
    int A;
    printf("Veuillez saisir un nombre :");
    scanf ("%d",&A);
    printf ("F=%.2f",factoriel(A));
    return 0;
 }