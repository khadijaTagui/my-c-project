#include <stdio.h>
#include <math.h>

int main()
{
    int choix;
    int i, n;
    float num1, num2, p, num, s,a;
    do
    {
        printf("1. Addition                     \n");
        printf("2. Soustraction                 \n");
        printf("3. Multiplication               \n");
        printf("4. Division                     \n");
        printf("5. Moyenne                     \n");
        printf("6. Valeur absolue              \n");
        printf("7. Exponentiation               \n");
        printf("8. Racine carrée               \n");
        printf("9. Quitter                     \n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            a = 0;
            printf("combien de nombres voulez-vous additionner?");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("entrer le nombre %d :", i + 1);
                scanf("%f", &num);
                a += num;
            }
            printf("la somme de vos nombres est : %.2f\n", a);
            break;
        case 2:
            printf("entrer le premier nombre:");
            scanf("%f", &num1);
            printf("entrer le deuxieme nombre:");
            scanf("%f", &num2);
            s = num1 - num2;
            printf("la soustraction de deux nombres est :%f", s);
            break;
        case 3:
            p = 1;
            printf("combien de nombres voulez-vous multiplier?");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("entrer le nombre %d :", i);
                scanf("%f", &num);
                p *= num;
            }
            printf("la somme de vos nombres est : %.2f\n", p);
            break;
        case 4:
                printf("entrer le numerateur : ");
                scanf("%f", &num1);
                printf("entrer le denominateur : ");
                scanf("%f", &num2);
                if (num2 != 0) {
                    printf("La division est : %.2f\n", (num1 / num2));
                } else {
                    printf("Erreur : division par zero\n");
                }
            break;
            case 5:
                s = 0;
                int n;
                printf("Combien de nombres voulez-vous entrer pour calculer la moyenne ? ");
                scanf("%d", &n);

                if (n > 0) {
                    for (i = 0; i < n; i++) {
                        printf("Entrez le nombre %d : ", i + 1);
                        scanf("%f", &num);
                        s += num;
                    }
                    printf("La moyenne de vos nombres est : %.2f\n", (s / n));
                } else {
                    printf("Le nombre d'entrées doit être supérieur à zéro.\n");
                }
                break;

              case 6:
                printf("Entrez un nombre : ");
                scanf("%f", &num);
                printf("La valeur absolue est : %.2f\n", fabs(num));
                break;
              case 7:
                printf("Entrez un nombre (base) : ");
                scanf("%f", &num1);
                printf("Entrez un nombre (exposant) : ");
                scanf("%f", &num2);
                printf("L'exponentiation est : %.2f\n", pow(num1, num2));
                break;
              case 8:
                printf("Entrez un nombre positif : ");
                scanf("%f", &num);
                if (num < 0) {
                    printf("Erreur : le nombre doit être positif.\n");
                } else {
                    printf("La racine carrée est : %.2f\n", sqrt(num));
                }
                break;
              case 9:
                printf("adios amigos!\n");
                break;

              default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }



 } while (choix != 9);

    return 0;
}

