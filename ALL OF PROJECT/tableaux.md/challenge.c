#include<stdio.h>
void categoriAge(int age){
if (age>0 && age<=12)
printf ("Enfants");
else if (age>12 && age<=17)
printf ("Adolescent");
else if (age>18 && age<=64)
printf ("Adulte");
else if (age >65)
printf ("Senior");
else if  (age<0)
printf ("age invalide");
else 
printf("----ERROR-----");

}



int main(){
float age ;
printf("Veuillez saisir l'age de personne:");
scanf ("%f",&age);
categoriAge(age);
    return 0;
}