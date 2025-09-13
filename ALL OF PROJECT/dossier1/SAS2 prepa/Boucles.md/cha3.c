#include<stdio.h>
#include<math.h>
int main(){
    int a,b,oper;
    char reponse ;
    do{
printf("------Calculatrice : Menu------\n");
printf("1.Addition :\n");
printf("2.Soustraction:\n");
printf("3.Multipication:\n");
printf("4.division :\n");
printf("5.Reste de division entiére :\n");
printf("6.Puissance :\n");
printf("Veuillez saisir l'opperation qui tu veut effectuer:");
scanf("%d",&oper);
printf("Veuillez saisir le premier terme :");
scanf ("%d",&a);
printf("Veuillez saisir le deuxieme terme :");
scanf("%d",&b);
switch (oper){
    case 1 : printf("A = %d \n",a+b);
             break ;
    case 2 : printf("S = %d\n",a-b);
             break ;
    case 3 : printf("M = %d\n",a*b);
             break ;
    case 4 : 
            if (b==0)
             printf("l'operation impossible\n");
             else 
             printf("D = %d\n",a/b);
             break ;
    case 5 : printf("R = %d\n",a%b);
             break ;
    case 6 : printf("P = %d\n",pow(a,b));
             break ;
}
printf ("Veux-tu refaire autre calcul (o,n)?\n");
scanf("%c",&reponse);
}while(reponse =='o');

    return 0;
}