 #include<stdio.h>
 int somme(int a,int b){
 int S;
 S=a+b;
 return S;
 }


 int main (){
    int a,b;
    printf("Veuillez saisir le premier nombre :");
    scanf ("%d",&a);
    printf("Veuillez saisir le deuxieme nombre :");
    scanf("%d",&b);
    printf("S=%d",somme(a,b));
    return 0;
 }