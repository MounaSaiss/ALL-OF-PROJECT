#include<stdio.h>
int main(){
    int m,h,T,TD;
    printf("Veuillez saisir  l'heure  qui tu veut:");
    scanf("%d",&h);
    printf("Veuillez saisir  minute   qui tu veut:");
    scanf("%d",&m);
    T=(h*60)+m;
    if (T<480)
    printf ("L'heure de départ la plus proche est 8h00 a.m arrivant à 10h16 a.m");
    else if (T<583)
    printf ("L'heure de départ la plus proche est  9h43 a.m.  11h52 a.m.");
    else if ( T<679)
    printf ("L'heure de départ la plus proche est 11h19 a.m. 1h31 p.m. ");
    else if ( T<767)
    printf ("L'heure de départ la plus proche est 12h47 p.m. 3h00 p.m.");
    else if ( T<840)
    printf ("L'heure de départ la plus proche est 2h00 p.m. 4h08 p.m.");
    else if (T<945)
    printf ("L'heure de départ la plus proche est 3h45 p.m. 5h55 p.m.");
    else if (T<1140)
    printf ("L'heure de départ la plus proche est 7h00 p.m. 9h20 p.m");
    else if (T<1305)
    printf ("L'heure de départ la plus proche est 9h45 p.m. 11h58 p.m.");
    else 
    printf ("temps ne pas existe ");

    return 0;
}