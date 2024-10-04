//programme pour gestion des rendez-vous.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int ref_S;
    int ref_A;
    int ref_rech;

    int choix2;
    int choix3;
    int choix4;

    int sum_age = 0;
    int moyenne;
    int a, b, c, d;



    char nom_t[20], prenom_t[20], number_t[20];
    int age_t, statut_t, ref_t, day_t, month_t, year_t;


    //entré des 10 premiers variables *******************************************************************************

   /* nom[4][20]='misbah';
    prenom[4][20]='adil';
    number[4][20]='0655555555';
    age[4]=20;
    statut[4]=1;
    ref[4]=5;
    day[4]=1;
    month[4]=1;
    year[4]=2020;

    nom[0]='misa';
    prenom[0]='nawfal';
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
    year[3]=2025;  */


    while(choix != 8){
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

    ref[x] = x+1; //Generation de la reference
    printf("reference : %d\n", ref[x]);
    printf("entrez votre nom : ");
    scanf("%s", nom[x]);
    printf("entrez votre prenom : ");
    scanf("%s", prenom[x]);
    printf("entrez votre numero : ");
    scanf("%s", number[x]);
    printf("entrez votre age : ");
    scanf("%d", &age[x]);
    printf("entrez votre statut : \n1.valide.\n2.reporte.\n3.annule\n4.traite.\n");
    scanf("%d", &statut[x]); //le statut prend lesvaleurs : valide /

    printf("entrez la date (day/month/year) : \n");
    scanf("%d/%d/%d", &day[x], &month[x], &year[x]);

    printf("Reservation enregistree !\n\n\n\n");
    x++;


    break;

case 2: //la modification d'une reservation**************************************************************************


    printf("entrez la reference du reservation que vous voulez modifier : ");
    scanf("%d", &ref_R);

    for(int i = 0 ; i < x ; i++){

        if(ref_R == ref[i]){
            printf("Veuillez choisir qu'est ce que vous voulez modifier :\n");
            printf("1.nom. \n");
            printf("2.prenom. \n");
            printf("3.telephone. \n");
            printf("4.age. \n");
            printf("5.statut. \n");
            printf("6.reference. \n");
            printf("7.date de reservation. \n");

            printf("veuillez entrer un choix pour modifier une valeur spécifique : ");

            scanf("%d", &choix2);

            switch(choix2){
                    case 1:
                    printf("entrer le nom à modifier: ");
                    scanf("%s", &nom[i]);
                    printf("le nom est à-jour\n");
                    break;

                    case 2:
                    printf("entrer le prenom à modifier: ");
                    scanf("%s", &prenom[i]);
                    printf("le prenom est à-jour\n");
                    break;

                    case 3:
                    printf("entrer le telephone à modifier: ");
                    scanf("%s", &number[i]);
                    printf("le telephone est à-jour\n");
                    break;

                    case 4:
                    printf("entrer l'age à modifier: ");
                    scanf("%d", &age[i]);
                    printf("l'age est à-jour\n");
                    break;

                    case 5:
                    printf("Modifier le statut: ");
                    scanf("%d", &statut[i]);
                    printf("le statut est à-jour\n");
                    break;

                    case 6:
                        printf("Modifier la date : ");
                        scanf("%d/%d/%d", &day[i], &month[i], &year[i]);
                        printf("La date est à jour.\n");
            }

                found++;
                break;
            }
        }

                if(found == 0) printf("\nReference non disponible.\n");

                break;

case 3: //la suppression d'une reservation***********************************************************************

    found = 0;
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

            x--;
            found++;
            printf("la reservation est supprimée avec succes.\n");
            break;

        }
    }
    if(found == 0) printf("Reference n'est pas disponible.\n");

    break;

case 4: //L'affichage des details d'une reservation*******************

    found = 0;
    printf("entrez la reference du reservation que vous voulez afficher : \n");
    scanf("%d", &ref_A);

    for ( int i = 0; i < x; i++){

        if(ref_A == ref[i]){
            printf("Le nom : %s\n", nom[i]);
            printf("Le prenom : %s\n", prenom[i]);
            printf("Le telephone : %s\n", number[i]);
            printf("L'age : %d\n", age[i]);
            printf("La reference : %d\n", ref[i]);
            printf("La date : %d/%d/%d\n\n\n", day[i], month[i], year[i]);
            found++;
            break;
        }
    }

        if(found == 0) printf("reservation non disponible");


    break;

case 5: //trier les reservations**********************************************************************

        printf("Choisissez le type de tri :\n");
        printf("1. Par statut\n");
        printf("2. Par date\n");

        printf("Entrez votre choix : ");
        scanf("%d", &choix3);

        switch(choix3){

    case 1: //Tri par statut

        for (int i = 0; i < x - 1; i++){
            for (int j = 0; i < x; j++){

                    if(statut[i] > statut[j]){

                        statut_t = statut[i];
                        statut[i] = statut[j];
                        statut[j] = statut_t;

                        strcpy (nom_t, nom[i]);
                        strcpy (nom[i], nom[j]);
                        strcpy (nom[j], nom_t);

                        strcpy(prenom_t, prenom[i]);
                        strcpy(prenom[i], prenom[j]);
                        strcpy(prenom[j], prenom_t);

                        strcpy(number_t, number[i]);
                        strcpy(number[i], number[j]);
                        strcpy(number[j], number_t);

                        age_t = age[i];
                        age[i] = age[j];
                        age[j] = age_t;

                        statut_t = statut[i];
                        statut[i] = statut[j];
                        statut[j] = statut_t;

                        day_t = day[i];
                        day[i] = day[j];
                        day[j] = day_t;

                        month_t = month[i];
                        month[i] = month[j];
                        month[j] = month_t;

                        year_t = year[i];
                        year[i] = year[j];
                        year[j] = year_t;

                        ref_t = ref[i];
                        ref[i] = ref[j];
                        ref[j] = ref_t;
                }
            }
        }
            printf("Réservations triées par nom.\n");
            break;



            case 2: // Tri par Date

                for (int i = 0; i < x - 1; i++){
                    for (int j = 0; j < x; j++){
                            if(year[i] > year[j] || year[i]==year[j] && month[i] > month[j] || year[i]==year[j] && month[i]==month[j] && day[i] > day[j]){
                                                     statut_t = statut[i];
                        statut[i] = statut[j];
                        statut[j] = statut_t;

                        strcpy (nom_t, nom[i]);
                        strcpy (nom[i], nom[j]);
                        strcpy (nom[j], nom_t);

                        strcpy(prenom_t, prenom[i]);
                        strcpy(prenom[i], prenom[j]);
                        strcpy(prenom[j], prenom_t);

                        strcpy(number_t, number[i]);
                        strcpy(number[i], number[j]);
                        strcpy(number[j], number_t);

                        age_t = age[i];
                        age[i] = age[j];
                        age[j] = age_t;

                        statut_t = statut[i];
                        statut[i] = statut[j];
                        statut[j] = statut_t;

                        day_t = day[i];
                        day[i] = day[j];
                        day[j] = day_t;

                        month_t = month[i];
                        month[i] = month[j];
                        month[j] = month_t;

                        year_t = year[i];
                        year[i] = year[j];
                        year[j] = year_t;

                        ref_t = ref[i];
                        ref[i] = ref[j];
                        ref[j] = ref_t;

                }

            }
        }

        }

    break;

case 6://rechercher une reservation*************************************************************************************


    printf("Entrez la reference de la référence réservation à rechercher : ");
    scanf("%d", &ref_rech);
    found = 0;

    for(int i = 0; i < x ; i++){

        if(ref_rech == ref[i]){

            found++;
            printf("Une reservation est trouvée avec la reference dont vous avez recherché.\nCliquez sur le choix 4 pour afficher ces details.\n");
            break;
        }
    }


case 7://Les statistiques***************************************************************************************************


    printf("Quelles Statistiques voudriez-vous afficher :\n");
    printf("La moyenne d'age.\n");
    printf("Afficher le nombre de patients par tranche d'âge");
    printf("le nombre total de réservations par statut");
    printf("Entrez un choix : ");
    scanf("%d", &choix4);

    if(choix4 == 1){

        for(int i = 0; i < x ; i++){

            sum_age += age[i];

        }
        moyenne = sum_age / x;
        printf("Lamouenne d'age des patients est : %d", moyenne);

    }

    else if(choix == 2){

        a = 0;
        b = 0;
        c = 0;
        for(int i=0 ; i < x ; i++){
            if(age[i] <= 18)
              a++;
        }
        printf("le nombre de patients qui sont entre 0-18 ans est : %d \n", a);

        for(int i=0 ; i < x ; i++){
            if(age[i] >= 19 && age[i] < 36)
              b++;
        }
        printf("le nombre de patients qui sont entre 19-35 ans est : %d \n", b);

        for(int i=0 ; i < x ; i++){
            if(age[i] > 35)
              c++;
        }
        printf("le nombre de patients qui sont superieurs à 36 ans est  : %d \n", c);

    }

    else if (choix4 == 3){

        a = 0;
        b = 0;
        c = 0;
        d = 0;

        for(int i = 0 ; i < x ; i++){

            if (statut == 1){
                a++;
            }
        }
        printf("Le nombre total des reservations valides est : %d", a);

        for(int i = 0 ; i < x ; i++){

            if (statut == 2){
                b++;
            }
        }
        printf("Le nombre total des reservations valides est : %d", b);

        for(int i = 0 ; i < x ; i++){

            if (statut == 3){
                c++;
            }
        }
        printf("Le nombre total des reservations valides est : %d", c);

        for(int i = 0 ; i < x ; i++){

            if (statut == 4){
                d++;
            }
        }
        printf("Le nombre total des reservations valides est : %d", d);
    }


        else{
                printf("Entrez un choix valide.");

        }


    break;

case 8:
    printf("***vous avez quittez***\n");
    return 0;


default : printf("\n\n\n\n\n\nnombre incorrect. entrez un autre nombre valide\n\n\n\n\n\n");
}
}


    return 0;
}
