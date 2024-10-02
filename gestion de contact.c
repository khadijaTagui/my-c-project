#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int num_contact = 0;
int capacite=100;
struct contact {
    char nom[50];
    char num_tel[50];
    char email[55];
};

void ajouter_contact(struct contact c[]) {
    int n;
    printf("COMBIEN DE CONTACT TU VEUX AJOUTER?");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
    if (num_contact < capacite) {
        printf("Entrer votre nom : ");
        scanf("%s", c[num_contact].nom);
        printf("Entrer votre numero : ");
        scanf("%s", c[num_contact].num_tel);
        printf("Entrer votre adresse mail : ");
        scanf("%s", c[num_contact].email);
        num_contact++;
        printf("Le contact a ete ajoute avec succes.\n");
        } else {
                printf("Echec !!\n");
            }
        }}

void modifier_contact(struct contact c[], int num_contact) {
    if (num_contact == 0) {
        printf("Il n'y a pas de contacts.\n");

    }else{

    char nomC[50];
    printf("Entrer le nom du contact a modifier : ");
    scanf("%s", nomC);

    for (int i = 0; i < num_contact; i++) {
        if (strcmp(c[i].nom, nomC) == 0) {
            printf("Entrer la nouvelle numero de telephone : ");
            scanf("%s", c[i].num_tel);
            printf("Entrer la nouvelle adresse email : ");
            scanf("%s", c[i].email);
            printf("Merci pour la modification\n");

        }else{
        printf("Contact non trouve.\n");
        }
    }

}}

void supprimer_contact(struct contact c[], int num_contact) {
    if (num_contact == 0) {
        printf("Il n'y a pas de contacts.\n");
        return;
    }
    char nomSupp[50];
    printf("Entrer le nom du contact a supprimer : ");
    scanf("%s", nomSupp);

    for (int i = 0; i < num_contact; i++) {
        if (strcmp(c[i].nom, nomSupp) == 0) {
            for (int j = i; j < num_contact - 1; j++) {
                c[j] = c[j + 1];
            }
            printf("Le contact a ete supprime.\n");
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void afficher_contacts(struct contact c[], int num_contact) {
    if (num_contact == 0) {
        printf("Aucun contact à afficher.\n");
    } else {
        int choixTri;
        printf("---------------------------------");
        printf("|Choisissez le type de tri:       |\n");
        printf("---------------------------------");
        printf("1. Ordre alphabetique croissant\n");
        printf("2. Ordre alphabetique décroissant\n");
        printf("Votre choix: ");
        scanf("%d", &choixTri);

        for (int i = 0; i < num_contact - 1; i++) {
            for (int j = 0; j < num_contact - i - 1; j++) {
                int condition = (choixTri == 1) ?
                                (strcmp(c[j].nom, c[j + 1].nom) > 0) :
                                (strcmp(c[j].nom, c[j + 1].nom) < 0);

                if (condition) {
                    struct contact temp = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < num_contact; i++) {
            printf("Nom: %s\n", c[i].nom);
            printf("Numéro: %s\n", c[i].num_tel);
            printf("Adresse: %s\n", c[i].email);
        }
    }
}
void rechercher_contact(struct contact c[], int num_contact) {
    char nomRecherche[50];
    printf("Entrer le nom de contact que vous voulez rechercher : ");
    scanf("%s", nomRecherche);

    for (int i = 0; i < num_contact; i++) {
        if (strcmp(c[i].nom, nomRecherche) == 0) {
            printf("Nom: %s\nNuméro: %s\nEmail: %s\n", c[i].nom, c[i].num_tel, c[i].email);
            return;
        }
    }
    printf("Le contact n'a pas été trouvé.\n");
}

int main() {
    struct contact c[100];

    int choix;


    do {
        printf("------------------------------------------\n");
        printf("|          MENU GESTION DE CONTACT       |\n");
        printf("------------------------------------------\n");
        printf("| 1. Ajouter un contact                  |\n");
        printf("| 2. Modifier un contact                 |\n");
        printf("| 3. Supprimer un contact                |\n");
        printf("| 4. Afficher tous les contacts          |\n");
        printf("| 5. Rechercher un contact               |\n");
        printf("| 0. Quitter                             |\n");
        printf("------------------------------------------\n");
        printf("| Choisir un choix:                      |\n");
        printf("------------------------------------------\n");

        scanf("%d", &choix);
        switch (choix) {
            case 1: {
                ajouter_contact(c);
                break;
            }
            case 2:
                modifier_contact(c, num_contact);
                break;
            case 3:
                supprimer_contact(c, num_contact);
                num_contact--;
                break;
            case 4:
                afficher_contacts(c, num_contact);
                break;
            case 5:
                rechercher_contact(c, num_contact);
                break;
            case 0:
                printf("Adios amigos\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }
    } while (choix != 0);

    return 0;
}
