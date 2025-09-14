#include<stdio.h>
int main (){
    int m1,j1,a1,m2,j2,a2;
    printf("Veuillez saisir la premier annee :");
    scanf("%d/%d/%d",&m1,&j1,&a1);
    printf("Veuillez saisir la deuxieme anne :");
    scanf("%d/%d/%d",&m2,&j2,&a2);
    if (a1<a2)
    printf ("la premiere anne plus tot que la deuxieme");
    else if (a2<a1)
    printf("la deuxieme anne plus tot que la premier ");
    else if (a1=a2){
        if (m1<m2)
         printf ("la premiere anne plus tot que la deuxieme");
        else if (m1>m2)
          printf("la deuxieme anne plus tot que la premier ");
        else if (m1=m2){
            if (j1<j2)
            printf ("la premiere anne plus tot que la deuxieme");
            else if (j1>j2)
             printf("la deuxieme anne plus tot que la premier ");
            else 
             printf ("les deux annee sont les memes ");
        }
        
    } 
    return 0;
}