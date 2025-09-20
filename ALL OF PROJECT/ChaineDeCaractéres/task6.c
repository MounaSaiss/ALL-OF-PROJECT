#include<stdio.h>
int main(){
char C[100];
int i;
int nbr=0;
printf ("Veuillez saisir une chaine de caractere :");
scanf("%s",C);
i=0;
do {
  nbr++;
  i++;
}while(C[i]!='\0');
printf("la longeur de chaine est : %d",nbr);
    return 0 ;
}