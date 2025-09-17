#include<stdio.h>
 int max(int a,int b){
 if (a<b)
 printf ("Max = %d",b);
 else 
 printf ("Min = %d",a);
 }


 int main (){
    int a,b;
    printf("Veuillez saisir le premier nombre :");
    scanf ("%d",&a);
    printf("Veuillez saisir le deuxieme nombre :");
    scanf("%d",&b);
    max(a,b);
    return 0;
 }