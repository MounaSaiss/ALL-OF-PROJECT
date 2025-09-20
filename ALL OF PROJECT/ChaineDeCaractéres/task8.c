#include<stdio.h>
#include<string.h>
int main (){
    char A[100],B[100];
    printf("Veuillez saisir une chaine 1:\n");
    scanf("%s",A);
    printf("Veuillez saisir une chaine 2:\n");
    scanf("%s",B);

if (strcmp(A,B)==0)
printf ("les chaines sont egales\n");
else 
printf("les chaines sont differentes\n");
    return 0;
}