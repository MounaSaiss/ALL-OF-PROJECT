#include<stdio.h>
#include<string.h> 
#define maxLivres 100
char Titres[100],Auteurs[100];
float Prix;
int Quantite;
char Tt[100][100],Ta[100][100];
float Tp[100];
int Tq[100];
int nbrlivres=0;

/*Fonction pour ajouter un livre */
void saisieUnLivre() {
if (nbrlivres>=100){
    printf ("Stock plein\n");
    return;
}
printf("********Ajoute un livre*********\n");
        printf ("Titres du livre :");
        scanf ("%s",Tt[nbrlivres]);
 
        printf ("Auteur du livre  :");
        scanf ("%s",Ta[nbrlivres]);
   
        printf ("Prix du livre :");
        scanf ("%f",&Tp[nbrlivres]);
   
        printf ("Quantité en stock :");
        scanf ("%d",&Tq[nbrlivres]);

       printf ("-----Livre Ajouter Avec Succes-----\n "); 

       nbrlivres++; 
         
}



/*fonction affichage des livres dans le stock*/
void afficher(){
    int i;
    if (nbrlivres==0){
        printf("Aucun livre dans le stock\n");
        return;
    }
    
    for (i=0;i<nbrlivres;i++){
        printf ("Titre : %s\n",Tt[i]);
        printf ("Auteur : %s\n",Ta[i]);
        printf ("Prix : %.2f\n",Tp[i]);
        printf ("Quantite : %d\n",Tq[i]);
        printf ("\n");
    }
}


/*Fonction pour changer la quantite d'un livre en stock*/
void mettreAJour(){
int nvl,i;
int trouve=0;
char metrreTitres[100];
    printf("Entrez le titre du livre à mettre à jour :");
    scanf("%99s",metrreTitres);
    printf ("Veuillez saisie la nouvelle quantite:");
    scanf("%d",&nvl);
for (i=0;i<nbrlivres;i++){
    if (strcmp(Tt[i],metrreTitres)==0){
        Tq[i]=nvl;
        trouve=1;
        printf("Quantité mise à jour avec succès !\n");
        break ;
    }
    
 }
if (trouve==0)
printf("Livre non trouvé.\n");
}


/*Fonction pour affiche nombre totale des livres */
void afficheNombrTotale(){
    int i,totale=0 ;

    for (i=0;i<nbrlivres;i++){
        totale = totale + Tq[i];
    }
printf ("Le nombre totale de livre est : %d\n",totale);
printf("\n");
}



/*Fonction pour cherche sur un livre*/
void recherche(){
    int i ;
    char livrchercher[100] ;
    printf ("Veuillez saisir le livre qui tu veut :");
    scanf ("%s",livrchercher);
    for (i=0;i<nbrlivres;i++){
        if (strcmp(Tt[i],livrchercher)==0){
        printf ("Titre : %s\n",Tt[i]);
        printf ("Auteur : %s\n",Ta[i]);
        printf ("Prix : %.2f\n",Tp[i]);
        printf ("Quantite : %d\n",Tq[i]);
        printf ("\n");
        }
    }

}





/*Fonction contient le menu de programme */
void afficheMenu (){
    printf ("-------------Menu----------\n");
    printf ("0.affiche le menu. \n");
    printf("1.Ajouter un livre au stock.\n");
    printf("2.Afficher tous les livres disponibles.\n");
    printf("3.Rechercher un livre par son titre.\n");
    printf("4.Mettre à jour la quantité d'un livre.\n");
    printf("5.Supprimer un livre du stock.\n");
    printf("6.Afficher le nombre total de livres en stock.\n");
    printf("7.Quitter le programme.");
    printf("*******************************************\n");  
}
 
void menu (){
    int choix ;
    do {
    afficheMenu();
    printf ("Veuillez saisir votre choix par nbr :\n");
    scanf("%d",&choix);

       switch(choix){
        case 0 : afficheMenu();
               break ;
        case 1 : saisieUnLivre();
               break ;
        case 2 :afficher();
               break ;
        case 3 :recherche();
               break ; 
        case 4 : mettreAJour();
               break ;
        case 6 : afficheNombrTotale();
               break ;
        case 7 : printf ("Quitter le programme ");
               break ;
        default : printf("ce choix n'existe pas\n");
               break ;
    }
    }while(choix!=7);
    
} 

/*Fonction Principale */
int main (){
menu();
    return 0;
}