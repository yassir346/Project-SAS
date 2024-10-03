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
    int ref[1000] ;
    int day[100], month[100], year[100];

    int choix;

    int x = 5;

    int found = 0;

    int ref_R;
    int choix2;
    int ref_S;
    int ref_A;

    //entré des 10 premiers variables *******************************************************************************

    nom[4][20]='misbah';
    prenom[4][20]='adil';
    number[4][20]='0655555555';
    age[4]=20;
    statut[4]=1;
    ref[4]=5;
    day[4]=1;
    month[4]=1;
    year[4]=2020;

    nom[0][20]='misa';
    prenom[0][20]='nawfal';
    number[0][20]='0611111111';
    age[0]=20;
    statut[0]=1;
    ref[0]=1;
    day[0]=1;
    month[0]=1;
    year[0]=2020;

    nom[1][20]='gandi';
    prenom[1][20]='salim';
    number[1][20]='0622222222';
    age[1]=30;
    statut[1]=1;
    ref[1]=2;
    day[1]=2;
    month[1]=2;
    year[1]=2020;

    nom[2][20]='kamili';
    prenom[2][20]='kamal';
    number[2][20]='0633333333';
    age[2]=40;
    statut[2]=2;
    ref[2]=3;
    day[2]=3;
    month[2]=3;
    year[2]=2023;

    nom[3][20]='jalil';
    prenom[3][20]='jelloul';
    number[0][20]='0644444444';
    age[3]=45;
    statut[3]=3;
    ref[3]=4;
    day[3]=4;
    month[3]=4;
    year[3]=2025;


    while(choix <= 8 || choix >= 8){
        //Affichage du tableau principale
        printf("1. Ajoutez une reservation.\n");
        printf("2. Modifier une reservation.\n");
        printf("3. Supprimer une reservation.\n");
        printf("4. Afficher les details d'une reservation.\n");
        printf("5. Trier les reservation.\n");
        printf("6. Rechercher une reservation.\n");
        printf("7. Statistiques\n");
        printf("8. quitter le programm.\n\n\n\n");

        printf(" entrez un choix : ");
        scanf("%d", &choix);

        switch (choix){

case 1:

    ref[x] = x+1;
    printf("reff %d\n", ref[x]);
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





    printf("entrez la date (day/month/year) : \n");
    scanf("%d/%d/%d", &day[x], &month[x], &year[x]);

    printf("Reservation enregistree !\n\n\n\n");
    x++;


    break;

case 2:


    printf("entrez la reference du reservation que vous voulez modifier : ");
    scanf("%d", &ref_R);

    for(int i = 0 ; i < x ; i++){

        if(ref_R == ref[i]){

            found++;
            break;
        }
    }
    if(found == 0) printf("\nReference non disponible.\n");

    else{
        printf("Veuillez choisir qu'est ce que vous voulez modifier :\n");
        printf("1.nom. \n");
        printf("2.prenom. \n");
        printf("3.telephone. \n");
        printf("4.age. \n");
        printf("5.statut. \n");
        printf("6.reference. \n");
        printf("7.date de reservation. \n");

        printf("veuillez entrer un choix : ");
        scanf("%d", &choix2);

        switch(choix2){
                case 1:
                printf("entrer le nom à modifier: ");
                scanf("%s", &nom[x]);
                printf("le nom est à-jour\n");
                break;

                case 2:
                printf("entrer le prenom à modifier: ");
                scanf("%s", &prenom[x]);
                printf("le prenom est à-jour\n");
                break;

                case 3:
                printf("entrer le telephone à modifier: ");
                scanf("%s", &number[x]);
                printf("le telephone est à-jour\n");
                break;

                case 4:
                printf("entrer l'age à modifier: ");
                scanf("%d", &age[x]);
                printf("l'age est à-jour\n");
                break;

                case 5:
                printf("Modifier le statut: ");
                scanf("%d", &statut[x]);
                printf("le statut est à-jour\n");
                break;

                case 6:
                    printf("Modifier la date : ");
                    scanf("%d/%d/%d", &day[x], &month[x], &year[x]);
                    printf("La date est à jour.\n");
        }

    }

    break;

case 3:


    printf("entrez le numero de reservation que vous voulez supprimer : ");
    scanf("%d", &ref_S);

    for(int i=0 ; i < x ; i++){

        if(ref_S == ref[i]){

            ref[i] = ref[x - 1];
            strcpy(nom[i],nom[x-1]);
            strcpy(prenom[i],prenom[x-1]);
            strcpy(number[i],number[x-1]);
            age[i] = age[x - 1];
            statut[i] = statut[x - 1];
            day[i] = day[x - 1];
            month[i] = month[x - 1];
            year[i] = year[x - 1];

            found++;
            break;
        }
    }

    if(found == 0) printf("\nReference non disponible.\n");

    break;



case 4:


    printf("entrez la reference du reservation que vous voulez afficher : \n");
    scanf("%d", &ref_A);

    for ( int i = 0; i < x; i++){

        if(ref_A == ref[i]){

            printf("le nom : %s\n", nom[i]);
            printf("le prenom : %s\n", prenom[i]);
            printf("le telephone : %s\n", number[i]);
            printf("l'age : %d\n", age[i]);
            printf("le reference : %d\n", ref[i]);
            printf("la date : %d/%d/%d\n\n\n", day[i], month[i], year[i]);
            break;
        }
    }



    break;
/*
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
