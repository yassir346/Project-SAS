//programme pour gestion des rendez-vous.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration des variables.

    char nom[100][20];
    char prenom[100][20];
    char number[100][20];
    int age[100];
    int statut[100];
    int Ref[1000] ;
    int day[100], month[100], year[100];

    int choix;

    int x = 0;


    while(choix <= 8 || choix >= 8){

        printf("1. Ajoutez une reservation.\n");
        printf("2. Afficher les details d'une reservation.\n");
        printf("3. Modifier une reservation.\n");
        printf("4. Supprimer une reservation.\n");
        printf("5. Trier les reservation.\n");
        printf("6. Rechercher une reservation.\n");
        printf("7. Statistiques\n");
        printf("8. quitter le programm.\n\n\n\n");

        printf(" entrez un choix : ");
        scanf("%d", &choix);

        switch (choix){

case 1:
    printf("entrez votre nom : ");
    scanf("%s", nom[x]);
    printf("entrez votre prenom : ");
    scanf("%s", prenom[x]);
    printf("entrez votre numero : ");
    scanf("%s", number[x]);
    printf("entrez votre age : ");
    scanf("%d", &age[x]);
    printf("entrez votre statut : \n1.valide.\n2.reporte.\n3.annule\n4.traite.\n");
    scanf("%d", &statut[x]);

    Ref[x] = x + 1;

    printf("reff %d\n", Ref[x]);

    printf("entrez la date (day/month/year)");
    scanf("%d/%d/%d", &day[x], &month[x], &year[x]);

    printf("livre ajoute avec succes !\n\n\n\n");
    x++;


    break;

/*case 2:

    for(int i = 0; i < x; i++){
     printf("****************\n");
     printf("%s\n", t[i]);
     printf("%s\n", a[i]);
     printf("%.2f\n", prix[i]);
     printf("%d", quantite[i]);
    }

    break;

case 3:


    printf("entrez le nom de livre a mise ajour");
    scanf("%s", &nom);

    for(int i=0 ; i < x ; i++){
        if(strcmp(nom, t[i]) == 0){
            printf("entrez le stock a ajouter :\n");
            scanf("%d", &quantite[i]);
            printf("stock est mis a jour");
            found++;
            break;
        }
    }
    if(found == 0) printf("\nlivre non trouve\n");

    break;


case 4:


    printf("entrez le titre que vous voulez supprimer: \n");
    scanf("%s", &sup[50]);

    for ( int i = 0; i < x; i++){

        if(strcmp(sup, t[i])==0){
            strcpy(t[i],t[x-1]);
            strcpy(a[i],a[x-1]);
            prix[i]=prix[x-1];
            quantite[i]=quantite[x-1];
            x--;
            found=1;
            printf("le livre est supprimer\n");
            break;
        }
    }



    break;

case 5:
    found=0;
    printf("entrez l'auteur : ");
    scanf("%s", &Rech_a);
    printf("entrez le titre : ");
    scanf("%s", &Rech_t);
    printf("%d :\n", x);

    for ( int i = 0; i < x; i++){
        printf("%s :  %s :\n", t[i], a[i]);
        if (strcmp(Rech_t, t[i])==0 && strcmp(Rech_a, a[i])==0){
            printf("%s\n", t[i]);
            printf("%s\n", a[i]);
            printf("%.2f\n", prix[i]);
            printf("%d\n", quantite[i]);
            found=1;
            break;
        }
    }
        if(found==0) printf("le livre n'est pas disponible");



    break;

case 6:

    for(i=0 ; i<x ; i++){
        f = f + quantite[i];
    }
    printf("le nombre de livres est %d \n", f);
    break;

case 7:

    printf("vous avez quittez :\n");
    return 0;

case 8:
    printf("vous avez quittez :\n");
    return 0;

*/
    default : printf("\n\n\n\n\n\nnumber incorrect. entrez un autre livre\n\n\n\n\n\n");
}
}



    return 0;
}
