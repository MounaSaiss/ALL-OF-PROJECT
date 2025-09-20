#include<stdio.h>
#include<string.h>
int main(){
char C1[100],C2[100];
printf ("Veuillez saisir une chaine de caractere 1:");
scanf("%s",C1);
printf ("Veuillez saisir une chaine de caractere 2:");
scanf("%s",C2);

strcat(C1,C2);
puts(C1);

    return 0;
}