 #include<stdio.h>
 int produit(int a,int b){
 int P;
 P=a*b;
 return P;
 }


 int main (){
    int a,b;
    printf("Veuillez saisir le premier nombre :");
    scanf ("%d",&a);
    printf("Veuillez saisir le deuxieme nombre :");
    scanf("%d",&b);
    printf("P=%d",produit(a,b));
    return 0;
 }