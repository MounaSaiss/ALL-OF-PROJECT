#include<stdio.h>
int main (){
int x,i;
printf("Veuillez saisir un nombre :");
scanf("%d",&x);
while (x<10 || x>20){
    if (x<10)
    printf("la valeur plus petit\n");
    else 
    printf("la valeur plus grand\n");
    printf("Veuillez saisir un nombre :");
    scanf("%d",&x);
}
printf("Bravo vous avez saisir un nombre correct");

    return 0;
}