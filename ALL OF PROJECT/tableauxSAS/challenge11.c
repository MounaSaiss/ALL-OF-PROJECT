#include<stdio.h>
int main (){
    float T[6];
    int i ;
    float  chang ,N ,x;
    /*Declaration de tableau*/
    for (i=0;i<6;i++){
        printf("Veuillez saisir l'element %d :",i+1);
        scanf("%f",&T[i]);
    }

    printf ("----Veeuillez saisir la valeur que tu veut changer :");
    scanf("%f",&x);
    
    printf("---Veuillez saisir la nouvelle valeur :");
    scanf("%f",&N);
    
      for (i=0;i<6;i++){
        if (T[i]==x)
        T[i]=N;   
      }
      
    printf("---Nouvelle tableaux---");
    for(i=0;i<6;i++)
    printf ("T[%d]=%.1f\n",i,T[i]);


    return 0;
}