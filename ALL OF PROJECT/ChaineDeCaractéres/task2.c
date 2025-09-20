#include<stdio.h>
int main (){
char C[10];
int i;
int n=0;
printf("Veuillez saisir la chaine :\n");
scanf("%s",C);
i=0;
do {
   n++;
i++;
}while(C[i]!='\0');

printf ("La taille de chaine est :%d",n);
    return 0;
}