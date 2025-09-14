#include<stdio.h>
int main (){
    int N,cd;
    printf ("Veuillez saisir un note entre 0 et 100: ");
    scanf("%d",&N);
    if (N>100 || N<0)
    printf("::::::::::Erreur::::::::::");
    else {
        cd=N/10; /*cd est le chifre dizaines*/
        switch(cd){
            case 10 :printf ("Note litterale : A\n");
                     break ;
             case 9 :printf ("Note litterale : A\n");
                     break ;
             case 8 :printf ("Note litterale : B\n");
                     break ;
             case 7 :printf ("Note litterale : C\n");
                     break ;
             case 6 :printf ("Note litterale : D\n");
                     break ;
            default  :printf ("Note litterale : F\n");
                     break ;
        }
    }
    return 0;
}