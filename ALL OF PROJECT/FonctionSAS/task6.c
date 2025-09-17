#include<stdio.h>
void Cercle_calcule (float r){
    float D,S,P;
    float pi=3.14159;
    printf("    D= %.2f \n",2*r);
    printf("    S= %.2f \n",2*pi*r);
    printf ("   P= %.2f \n",pi*r*r);
}







int main (){
    float r;
    printf("Veuillez saisir un rayon de cercle :");
    scanf("%f",&r);
    Cercle_calcule(r);
    return 0;
}