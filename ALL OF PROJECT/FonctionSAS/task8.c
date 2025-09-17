#include<stdio.h>
#include<math.h>

float a,b,c; /*Variable global*/
/*fonction de sasie */
void saisi(){
    printf("Veuillez saisir a:");
    scanf("%f",&a);
    printf("Veuillez saisir b:");
    scanf("%f",&b);
    printf("Veuillez saisir c:");
    scanf("%f",&c);
}

/*Fonctoion return delta*/
float discriminent(){
    float  delta ;
    delta =pow(-b,2)-(4*a*c);
    return delta ;
}

/*fonction pour les cas */
void solution(float delta){
    float x,x1,x2;
    if (delta<0)
        printf("ensemble solution est  vide\n");

    else if(delta==0){
        x=-b/(2*a);
        printf("%f est  la solution\n",x);
    }

    else {
         x1=(-b-sqrt(delta))/(2*a);
         x2=(-b+sqrt(delta))/(2*a);
         printf("X1=%.2f     X2=%.2f\n",x1,x2);
    }    
}

int main (){    
    saisi();
    float delta=discriminent();
    solution (delta);
    return 0;
}