#include<stdio.h>
float  diametre (float r){
    float D;
    D=2*r;
return D ;
}

float  surface (float r){
    float S;
    float pi=3.14159;
    S=pi*r*r;
return S;
}

float  perimetre(float r){
    float P;
    float pi=3.14159;
    P=2*pi*r;
return P ;
}



int main (){
    float r;
    printf("Veuillez saisir un rayon de cercle :");
    scanf("%f",&r);
    printf ("D =%f\n",diametre(r));
    printf("S=%f\n",surface(r));
    printf("P=%f\n",perimetre(r));

    return 0;
}