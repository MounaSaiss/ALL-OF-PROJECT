#include<stdio.h>

/*  Fonction remplissage de tableau */
void saisie (float T[6]){
    int i ;
    for (i=0;i<6;i++){
        printf("Veuillez saisir l'element %d : ",i+1);
        scanf ("%f",&T[i]);
    }
}
/*ordre croissante*/
void croissante (float T[6]){
    int i,j ;
    float  tmp ;  
    for (i=0;i<6;i++){
        for(j=i+1;j<6;j++){
             if (T[i]>T[j])
             tmp=T[i];
             T[i]=T[j];
             T[j]=tmp;
        }
    }
printf ("\nles nombres par ordre croissante :");
affiche(T);
}

/*ordre decroissante*/
void decroissante (float T[6]){
    int i,j ;
    float  tmp ;  
    for (i=0;i<6;i++){
        for(j=1;j<6;j++){
             if (T[i]<T[j])
             tmp=T[i];
             T[i]=T[j];
             T[j]=tmp;
        }
    }
printf ("\nles nombres par ordre decroissante :");
affiche(T);    
}

void affiche (float T[]){
    int i;
    for (i=0;i<6;i++)
    printf ("T[%d]=%.2f",i,T[i]);
}

int main (){
    float T[6];
    int i,j;
    saisie(T);
    croissante(T);
    decroissante(T);
    affiche(T);
    
    return 0;
}