#include <stdio.h>
#include <math.h>

// /Challenge 1 : Paire ou Impaire/
/*int main(){
    int num;
    printf("entrer le nombre:");
    scanf("%d",&num);
    if(num%2==0)
        printf("le nombre est paire");
    else
        printf("le nombra est impaire");
return 0;
}

/Challenge 2 : Voyelle ou Non/

/*int main(){
    char caractere;
    printf("entrer le caractere:");
    scanf("%c",&caractere);
    switch(caractere){
    case 'a':
    case 'e':
    case 'u':
    case 'o':
    case 'i':
    case 'A':
    case 'E':
    case 'U':
    case 'O':
    case 'I':
    printf("le caractere %c est voyelle",caractere);
    break;
    default :
    printf("le caractere n'est pas une voyelle");


    }
return 0;
}
/Challenge 3 : Somme de Deux Valeurs/

/*int main(){

    int a,b,s,t;
    printf("entrer les deux valeurs:");
    scanf("%d %d",&a,&b);
    s=a+b;
    if (a==b){
        t=s*3;

        printf("la somme en triple est %d",t);}
    else{
        printf("la somme est %d",s);}
return 0;
}

/Challenge 5 : Conversion d'Année/

/*int main(){
    int choix;
    float annee,mois,jour,heure,minute,seconde;
    printf("entrer le nombre d'annees:");
    scanf("%f",&annee);
    printf("choisisez l'option de convertion:\n");
    printf("1.convertir en moi\n");
    printf("2.convertir en jour\n");
    printf("3.convertir en heure\n");
    printf("4.convertir en minute\n");
    printf("5.convertir en seconde\n");
    printf("votre choix:");
    scanf("%d",&choix);
    switch(choix){
case 1:
    mois = annee *12;
    printf("la convert en moi est %.2f",mois);
    break;
    case 2:
    jour = annee *365;
    printf("la convert en jour est %.2f",jour);
    break;
    case 3:
    heure = annee *365 *24;
    printf("la convert en heure est %.2f",heure);
    break;
    case 4:
    minute = annee *365 *24 *60 ;
    printf("la convert en minute est %.2f",minute);
    break;
    case 5:
    seconde = annee *365 *24*60 *60;
    printf("la convert en seconde est %.2f",seconde);
    break;
    default:
        printf("le choix est indisponible");
    }

return 0;
}
*/
   /* int estBissextile(int annee){
    if ((annee %4 ==0 && annee%100 !=0) ||(annee % 400 ==0) ){
       return 1;
    }
    return 0;
}
int main(){

    int choix;
    int annee;
    float moi,jour,heure,minute,seconde;
    printf("entrer l'annees:");
    scanf("%d",&annee);
    int joursParAn = estBissextile(annee) ? 366 : 365;
    printf("choisisez l'option de convertion:\n");
    printf("1.convertir en moi\n");
    printf("2.convertir en jour\n");
    printf("3.convertir en heure\n");
    printf("4.convertir en minute\n");
    printf("5.convertir en seconde\n");
    printf("votre choix:");
    scanf("%d",&choix);
    switch(choix){
case 1:
    moi = joursParAn /30;
    printf("la convertir en moi est %.2f",moi);
    break;
case 2:
    jour = joursParAn;
    printf("la convertir en jour est %.2f",jour);
    break;
case 3:
    heure = joursParAn * 24;
    printf("la convertir en heure est %.2f",heure);
    break;
case 4:
    minute = joursParAn * 24 *60;
    printf("la convertir en minute est %.2f",minute);
    break;
case 5:
    seconde = joursParAn *24 * 60 * 60;
    printf("la convertir en seonde est %.2f",seconde);
    break;
default:
    printf("le choix n'est pas disponible");

    }

return 0;
}


  Challenge 6 : Positif, Négatif ou Nul
  int main(){
    int num ;
    printf("entrer le nombre:");
    scanf("%d",&num);
    if (num<0){
        printf("le nombre est negatif");
    }
    else if (num>0){
        printf("le nombre est positif");
    }
    else
        printf("le nombre est egal a zero");
  return 0;
  }
Challenge 7 : Alphabet Majuscule

int main(){
    char caractere;
    printf("entrer le caractere:");
    scanf("%c",&caractere);
    if(caractere >= 65 && caractere <= 90)
        printf("le caractere est un alphabet majuscule");
    else
        printf("le caractere n'est pas un alphabet majuscule");
return 0;
}
Challenge 8 : Mention Obtenue

int main(){
    float note;
    char mention;
    printf("entrer votre moyenne note :");
    scanf("%f",&note);
    if ( note <= 10){
        printf("recale");
    }
    else if ( note > 10 && note <= 12){
        printf("mention passable");
    }
    else if (note > 12 && note < 14){
        printf("mention assez bien");
    }
    else if (note >= 14 && note <= 16){
        printf("mention bien");
    }
    else
        printf("mention tres bien");
return 0;
}

Challenge 9 : Vérification d'Alphabet*/

/*int main(){
    char caractere;
    printf("entrer le caractere :");
    scanf("%c",&caractere);
    if (( caractere >= 'A' && caractere <= 'Z')||(caractere >= 'a' && caractere <= 'z')){
        if ( caractere >= 'A' && caractere <= 'Z'){
            printf("le caractere est un alphabet majuscule");
        }
        else if (caractere >= 'a' && caractere <= 'z'){
            printf("le caractere est un alphabet minuscule");
        }
    }
    else
        printf("le caractere n'est pas un alphabet");
return 0;
}*/

//Challenge 10 : Formatage de la Date
int main(){
    int jour,mois,annee;
    char *nomMois[] = {"Janvier", "Février", "Mars", "Avril", "Mai", "Juin",
                       "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"};
    printf("entrer la date :");
    scanf("%d/%d/%d",&jour,&mois,&annee);
    if (mois < 1 || mois > 12){
        printf("le mois invalide");
    }else
    printf("%d-%s-%d",jour,nomMois[mois - 1],annee);
return 0;
}