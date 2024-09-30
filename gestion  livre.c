#include <stdio.h>
int main()
{
    char titre[50][50], auteur[50][50];
    float prix[100];
    int quantite[100];
    int choix, n, capacite = 100, num_livre = 0;
    do
    {
        printf("------------------------------------------\n");
        printf("|          MENU GESTION DE LIVRES        |\n");
        printf("------------------------------------------\n");
        printf("| 1. Ajouter un livre                    |\n");
        printf("| 2. Afficher les livres stockes         |\n");
        printf("| 3. Rechercher un livre                 |\n");
        printf("| 4. Mettre à jour la quantite d'un livre|\n");
        printf("| 5. Afficher le nombre total de livres  |\n");
        printf("| 6. Supprimer un livre                  |\n");
        printf("| 0. Quitter                             |\n");
        printf("------------------------------------------\n");
        printf("| Choisir un choix:                      |\n");
        printf("------------------------------------------\n");

        scanf("%d", &choix);


        switch (choix)
        {
        case 1:
            printf("COMBIEN DE LIVRE TU VEUX AJOUTER?");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                if (num_livre < capacite)
                {
                    printf("Entrer le titre de livre %d:", i + 1);
                    scanf("%s", &titre[num_livre]);
                    printf("Entrer le nom d'auteur de livre %d:", i + 1);
                    scanf("%s", &auteur[num_livre]);
                    printf("Entrer le prix de livre %d:", i + 1);
                    scanf("%f", &prix[num_livre]);
                    printf("Entrer la quantite de livre %d :", i + 1);
                    scanf("%d", &quantite[num_livre]);
                    num_livre++;
                    printf("livre ajouter avec succes.\n");
                }
                else
                {
                    printf("le stock est plein!!\n");
                }
            }
            break;
        case 2:
            if (num_livre == 0)
            {
                printf("aucun livre stocker .");
            }
            else
            {
                for (int i = 0; i < num_livre; i++)
                {
                    printf(" titre :%s\n auteur:%s\n prix:%.2f\n quantite:%d\n",
                           titre[i], auteur[i], prix[i], quantite[i]);
                }
            }
            break;
        case 3:
        {
            char titreRecherche[50];
            printf("entrer le titre de livre qui tu es veux:");
            scanf("%s", &titreRecherche);
            for (int i = 0; i < num_livre; i++)
            {
                if (strcmp(titre[i], titreRecherche) == 0)
                {
                    printf(" titre :%s\n auteur:%s\n prix:%.2f\n quantite:%d\n",
                           titre[i], auteur[i], prix[i], quantite[i]);
                }
                else
                {
                    printf("le livre non trouve\n");
                }
            }
        }
        break;
        case 4:
        {
            char titreMAJ[50];
            printf("entrer le titre du livre a mettre a jour: ");
            scanf("%s", &titreMAJ);
            for (int i = 0; i < num_livre; i++)
            {
                if (strcmp(titre[i], titreMAJ) == 0)
                {
                    printf("entrer la nouvelle quantite:");
                    scanf("%d", &quantite[i]);
                    printf("quantite mise e jour avec succes\n");
                }
                else
                {
                    printf("livre non trouve!!\n");
                }
            }
        }
        break;
        case 5:
            printf("nombre total de livres qui ont stocke est:%d\n", num_livre);
            break;
        case 6:{
            char titreSupp[50];
            printf("entrer le titre du livre que tu veux supprimer: ");
            scanf("%s", titreSupp);
            for (int i = 0; i < num_livre; i++){
                if (strcmp(titre[i], titreSupp) == 0){
                    for (int j = i; j < num_livre;j++){
                        strcpy(titre[j], titre[j + 1]);
                        strcpy(auteur[j], auteur[j + 1]);
                        prix[j] = prix[j + 1];
                        quantite[j] = quantite[j + 1];
                    }
                    num_livre--;
                    printf("le livre supprimer\n");
                    break;
                }
                else{
                    printf("le livre non trouve\n");
                }
            }
            break;}
        case 0:
            printf("Adios amigos\n");
            break;
        default:
            printf("choix invalide:\n");
            break;
        }
    } while (choix != 0);

    return 0;
}

