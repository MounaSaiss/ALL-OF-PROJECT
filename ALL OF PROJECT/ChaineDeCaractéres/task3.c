#include<stdio.h>
#include<string.h>

int main (){
int i ;
char C[10];
printf("Veuillez saisir une chaine :");
scanf("%s",C);
/*for (i=strlen(C)-1;i>=0;i--){
    printf("%c",C[i]);
}
*/
printf ("%s",strrev(C));
    return 0;
}