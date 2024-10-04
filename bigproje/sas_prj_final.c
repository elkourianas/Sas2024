#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nom[50];
    char prenom[50];
    char telephone[15];
    int age;
    char statut[20];
    int reference;
    char date[20];
    char a[20];
} Reservation;

Reservation reservations[MAX];
int Count = 0;

void ajouterReservation() {
    if (Count < MAX) {
        Reservation newReservation;

        printf("Entrez le nom : ");
        scanf("%s", newReservation.nom);

        printf("Entrez le prénom : ");
        scanf("%s", newReservation.prenom);

        printf("Entrez le téléphone : ");
        scanf("%s", newReservation.telephone);

        printf("Entrez l'âge : ");
        scanf("%d", &newReservation.age);

        printf("Entrez le statut (validé, reporté, annulé, traité) : ");
        scanf("%s", newReservation.statut);

        printf("Entrez la date de réservation (AAAA-MM-JJ) : ");
        scanf("%s", newReservation.date);

        newReservation.reference = Count + 0;
        reservations[Count] = newReservation;
        Count++;

        printf("Réservation ajoutée avec succès ! Référence : %d\n", newReservation.reference);
    } else {
        printf("Le nombre maximum de réservations a été atteint.\n");
    }
}

void afficherReservations() {
    if (Count == 0) {
        printf("Aucune réservation enregistrée.\n");
        return;
    }

    for (int i = 0; i < Count; i++) {
        printf("Référence : %d, Nom : %s, Prénom : %s, Téléphone : %s, Âge : %d, Statut : %s, Date : %s\n",
               reservations[i].reference, reservations[i].nom, reservations[i].prenom,
               reservations[i].telephone, reservations[i].age, reservations[i].statut,
               reservations[i].date);
    }
}

void modifierReservation(int reference) {
    for (int i = 0; i < Count; i++) {
        if (reservations[i].reference == reference) {
            printf("Modifier la réservation pour %s %s:\n", reservations[i].nom, reservations[i].prenom);
            printf("Entrez le nouveau téléphone : ");
            scanf("%s", reservations[i].telephone);

            printf("Entrez le nouveau statut : ");
            scanf("%s", reservations[i].statut);

            printf("entrez le vouveau date :");
            scanf("%s",reservations[i].date);
            printf("Réservation modifiée avec succès !\n");
            return;
        }
    }
    printf("Réservation non trouvée.\n");
}

void supprimerReservation(int reference) {
    for (int i = 0; i < Count; i++) {
        if (reservations[i].reference == reference) {
            for (int j = i; j < Count - 1; j++) {
                reservations[j] = reservations[j + 1];
            }
            Count--;
            printf("Réservation supprimée avec succès !\n");
            return;
        }
    }
    printf("Réservation non trouvée.\n");
}

void rechercherReservationParNom() {
    char nom[50];
    printf("Entrez le nom à rechercher :\n");
    scanf("%s", nom);
    int found = 0;
    for (int i = 0; i < Count; i++) {
        if (strcmp(reservations[i].nom, nom) == 0) {
            printf("Référence : %d, Prénom : %s, Téléphone : %s, Âge : %d, Statut : %s, Date : %s\n",
                   reservations[i].reference, reservations[i].prenom, reservations[i].telephone,
                   reservations[i].age, reservations[i].statut, reservations[i].date);
            found = 1;
        }
    }
    if (!found) {
        printf("Aucune réservation trouvée pour le nom %s.\n", nom);
    }
}



void ajouterDonnees() {
    if (Count + 1 < MAX) {
        strcpy(reservations[Count].nom, "oussama");
        strcpy(reservations[Count].prenom, "casdawi");
        strcpy(reservations[Count].telephone, "0654545454");
        reservations[Count].age = 19;
        strcpy(reservations[Count].statut, "reporter");
        reservations[Count].reference = 90;
        strcpy(reservations[Count].date, "2024-10-02");
        Count++;

        strcpy(reservations[Count].nom, "anas");
        strcpy(reservations[Count].prenom, "elkourichi");
        strcpy(reservations[Count].telephone, "0698875465");
        reservations[Count].age = 19;
        strcpy(reservations[Count].statut, "annulé");
        reservations[Count].reference = 91;
        strcpy(reservations[Count].date, "2024-05-05");
        Count++;

        strcpy(reservations[Count].nom, "amin");
        strcpy(reservations[Count].prenom, "naaim");
        strcpy(reservations[Count].telephone, "0698875465");
        reservations[Count].age = 19;
        strcpy(reservations[Count].statut, "annulé");
        reservations[Count].reference = 92;
        strcpy(reservations[Count].date, "2024-05-05");
        Count++;

        strcpy(reservations[Count].nom, "omar");
        strcpy(reservations[Count].prenom, "amri");
        strcpy(reservations[Count].telephone, "0698875465");
        reservations[Count].age = 19;
        strcpy(reservations[Count].statut, "annulé");
        reservations[Count].reference = 93;
        strcpy(reservations[Count].date, "2024-05-05");
        Count++;

        strcpy(reservations[Count].nom, "kholod");
        strcpy(reservations[Count].prenom, "lamri");
        strcpy(reservations[Count].telephone, "0698875465");
        reservations[Count].age = 19;
        strcpy(reservations[Count].statut, "annulé");
        reservations[Count].reference = 94;
        strcpy(reservations[Count].date, "2024-05-05");
        Count++;

        strcpy(reservations[Count].nom, "bassma");
        strcpy(reservations[Count].prenom, "lwaar");
        strcpy(reservations[Count].telephone, "0698875465");
        reservations[Count].age = 19;
        strcpy(reservations[Count].statut, "annulé");
        reservations[Count].reference = 95;
        strcpy(reservations[Count].date, "2024-05-05");
        Count++;
         strcpy(reservations[Count].nom, "bassma");
        strcpy(reservations[Count].prenom, "louwi");
        strcpy(reservations[Count].telephone, "0698875465");
        reservations[Count].age = 19;
        strcpy(reservations[Count].statut, "annulé");
        reservations[Count].reference = 96;
        strcpy(reservations[Count].date, "2024-04-05");
        Count++;
         strcpy(reservations[Count].nom, "mohemed");
        strcpy(reservations[Count].prenom, "kouri");
        strcpy(reservations[Count].telephone, "0698875465");
        reservations[Count].age = 19;
        strcpy(reservations[Count].statut, "annulé");
        reservations[Count].reference = 97;
        strcpy(reservations[Count].date, "2024-05-12");
        Count++;
         strcpy(reservations[Count].nom, "aamr");
        strcpy(reservations[Count].prenom, "lwod");
        strcpy(reservations[Count].telephone, "0698875465");
        reservations[Count].age = 19;
        strcpy(reservations[Count].statut, "annulé");
        reservations[Count].reference = 98;
        strcpy(reservations[Count].date, "2024-07-05");
        Count++;
         strcpy(reservations[Count].nom, "bassma");
        strcpy(reservations[Count].prenom, "lwaar");
        strcpy(reservations[Count].telephone, "0698875465");
        reservations[Count].age = 19;
        strcpy(reservations[Count].statut, "annulé");
        reservations[Count].reference = 99;
        strcpy(reservations[Count].date, "2024-05-05");
        Count++;

    } else {
        printf("Le nombre maximum de réservations a été atteint.\n");
    }
}

int main() {

    ajouterDonnees();
    int choice;
    do {
        printf("\n1. Ajouter une réservation\n");
        printf("2. Modifier une réservation\n");
        printf("3. Supprimer une réservation\n");
        printf("4. Afficher les réservations\n");
        printf("5. Rechercher une réservation par nom\n");
        printf("0. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                ajouterReservation();
                break;
            case 2: {
                int ref;
                printf("Entrez la référence de la réservation à modifier : ");
                scanf("%d", &ref);
                modifierReservation(ref);
                break;
            }
            case 3: {
                int ref;
                printf("Entrez la référence de la réservation à supprimer : ");
                scanf("%d", &ref);
                supprimerReservation(ref);
                break;
            }
            case 4:
                afficherReservations();
                break;
            case 5:
                rechercherReservationParNom();
                break;

            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide, veuillez réessayer.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
