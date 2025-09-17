#include<stdio.h>
 int min(int a,int b){
 if (b<a)
 printf ("Min = %d",b);
 else 
 printf ("Min = %d",a);
 }


 int main (){
    int a,b;
    printf("Veuillez saisir le premier nombre :");
    scanf ("%d",&a);
    printf("Veuillez saisir le deuxieme nombre :");
    scanf("%d",&b);
    min(a,b);
    return 0;
 }