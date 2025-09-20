#include<stdio.h>
#include<string.h>
int main(){
char M1 [100],M2[100];
int i;
int n=0;

printf("Veuillez saisir la 1ere chaine:\n");
scanf("%s",M1);
printf("Veuillez saisir la 2eme chaine:\n");
scanf("%s",M2);

if (strlen(M1)!=strlen(M2))
   printf("les deux chaine en pas la meme taille");
else {
    for (i=0;i<=strlen(M1);i++){
        if (M1[i]!=M2[i])
        n++;
    }
printf ("la Distance de Hamming est %d ",n);
}
    return 0;
}