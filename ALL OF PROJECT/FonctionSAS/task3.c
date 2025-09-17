#include<stdio.h>
void typeannee (int A){
    if (A%4==0 || A%100!=0 && A%400==0)
        printf ("--l'annee est bissextile--");
    else 
        printf("**L'annee pas bisextile**");
    

}



int main (){
    int an;
    printf ("Veuillez saisir une annee : ");
    scanf("%d",&an);
    typeannee(an);
}