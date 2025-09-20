#include<stdio.h>
#include<string.h>
int main (){
char C[100];
char A;
int i ;
int taille ;
printf ("Veuillez saisir une chaine de caractére :\n");
scanf("%s",C);
printf("Veuillez saisir le caractéres que tu veux eiminer :\n");
scanf(" %c",&A);
taille = strlen(C);

for (i=0;i<taille;i++){
if (C[i]=A){
    i--;
    taille--;
}
}
printf ("la haine aprés modification %s\n",C);
    return 0 ;
}