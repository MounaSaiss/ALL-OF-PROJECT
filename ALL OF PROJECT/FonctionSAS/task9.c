#include<stdio.h>
float somme(float T[]){
    int i;
    float S;
    S=0;
    for (i=0;i<10;i++)
        S=S+T[i];
    
    return S;
}

float produit(float T[]){
    int i;
    float P;
    P=1;
    for (i=0;i<10;i++)
        P=P*T[i];
return P;
}

float moyenne (float T[]){
    float M,S;
    S==somme(T);
    M=S/10;
return M;
}

void PN  (float T[]){
    int i;
    printf("les elements positifs sont:\n");
     for (i=0;i<10;i++){
         if (T[i] > 0)
        printf ("%.2f\n",T[i]);
     }
       printf("les elements negatifs sont:\n");
     for (i=0;i<10;i++){
         if (T[i] < 0)
        printf ("%.2f\n",T[i]);
     } 
      
     
}




int main (){
    int i ;
    float T[10];
    for (i=0;i<10;i++){
        printf("Veuillez saisir l'element %d :",i+1);
        scanf("%f",&T[i]);
    }
    
    printf ("la somme est %f\n",somme(T));
    printf ("le produit  est %f\n",produit(T));
    printf ("le moyenne  est %f\n",moyenne(T));
    PN(T);

    return 0;
}