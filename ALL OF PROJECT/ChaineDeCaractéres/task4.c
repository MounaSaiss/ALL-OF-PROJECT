#include<stdio.h>
#include<string.h>
int main(){
int i ;
char C1[100] ,C2[100];
float n;
printf("Veuillez saisir une chaine  :\n");
scanf("%s",C1);

strcpy(C2,C1);

strrev(C2);

n=strcmp(C1,C2);
if (n==0)
printf("chaine  palindrome");
else 
printf(" chaine  n'est pas palindromme ");
    return 0;
}