#include <stdio.h>
#include <math.h>
// Challenge 1 : Affichage Informations
// int main(){
//     char nom[50],prenom[50],sexe,email[255];
//     int age;
//     printf("entrer votre nom :\n");
//     scanf("%s",&nom);
//     printf("entrer votre prenom :\n");
//     scanf("%s",&prenom);
//     printf("entrer votre sexe :\n");
//     scanf("%s",&sexe);
//     printf("entrer votre email :\n");
//     scanf("%s",&email);
//     printf("entrer votre age :");
//     scanf("%d",&age);

// }
// Challenge 2 : Conversion de la température
// int main(){
//     int C;
//     float K;
//     printf("entrer la temperateur en celsius :");
//     scanf("%d",&C);
//     K = C + 273.15;
//     printf("la temperateur en kelvin est %.2f",K);
// return 0;

// }
// Challenge 3 : Conversion de la distance
// int main(){
//     int Km;
//     float Yards;
//     printf("entrer la distance en kilometres :");
//     scanf("%d",&Km);
//     Yards = Km * 1093.61;
//     printf("la distance en Yards est %.2f",Yards);
// return 0;

// }
// Challenge 4 : Conversion de la vitesse
//  int main(){
//     float kmH,ms;
//     printf("entrer la vitesse en kilomètres par heure :");
//     scanf("%f",&kmH);
//     ms = kmH * 0.27778;
//     printf("la distance en en mètres par seconde est %.2f",ms);
// return 0;

// }
// Challenge 7 : Moyenne pondérée de trois nombres
// int main(){
//     float a,b,c;

//     printf("entrer la valeur de a:");
//     scanf("%f",&a);
//     printf("entrer la valeur de b:");
//     scanf("%f",&b);
//     printf("entrer la valeur de c:");
//     scanf("%f",&c);
//     float m = ((a * 2) + (b * 3) + (c * 5)) / 10;
//         printf(" la valeur de m: %.2f",m);

// return 0;

// }

// int main(){
//     float a,b,c;

//     printf("entrer la valeur de a:");
//     scanf("%f",&a);
//     printf("entrer la valeur de b:");
//     scanf("%f",&b);
//     printf("entrer la valeur de c:");
//     scanf("%f",&c);
//     int m = ((a * 2) + (b * 3) + (c * 5)) ;
//     float f = m;
//         printf(" la valeur de m: %.2f",f);

// return 0;

// }
// Challenge 8 : Calcul de la moyenne géométrique
// int main(){
//     int a,b,c,mg;
//     printf("entrer la valeur de a:");
//     scanf("%d",&a);
//     printf("entrer la valeur de b:");
//     scanf("%d",&b);
//     printf("entrer la valeur de c:");
//     scanf("%d",&c);
//     mg = pow((a * b * c),1/3);
//     printf("la moyenne géométrique de trois nombres est %d",mg);
// return 0;

// }
// Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
// int main(){
//     int x1,x2,y1,y2,z1,z2,d;
//     printf("entrer la valeur de x1:");
//     scanf("%d",&x1);
//     printf("entrer la valeur de x2:");
//     scanf("%d",&x2);
//     printf("entrer la valeur de y1:");
//     scanf("%d",&y1);
//     printf("entrer la valeur de y2:");
//     scanf("%d",&y2);
//     printf("entrer la valeur de z1:");
//     scanf("%d",&z1);
//     printf("entrer la valeur de z2:");
//     scanf("%d",&z2);
//     d = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));
//     printf("la distance entre deux points est %d",d);
// return 0;

// }

// Challenge 10 : Volume d'une sphère

// int main(){
//     int r,v;
//     const pi = 3.14;
//     printf("entrer la valeur de volume v:");
//     scanf("%d",&r);
//     v = (4/3) * pi * pow(r,3);
//     printf("le volume d'une sphère est %d",v);
// return 0;

// }
// Challenge 11 : Surface d'un rectangle

// int main()
// {
//     float lon, lar, s;
//     printf("entrer la valeur de longueur lon:");
//     scanf("%f", &lon);
//     printf("entrer la valeur de longueur lar:");
//     scanf("%f", &lar);
//     s = lon * lar;
//     printf(" la surface d'un rectangle est %.2f", s);
//     return 0;
// }

// Challenge 12 : Nombre entier à quatre chiffres en ordre inverse

// int main()
// {
//     int n,a,m,c,w;
//     printf("entrer la valeur de n:");
//     scanf("%d", &n);
//     a =  (n/1000)%10;
//     m = (n/100)%10;
//     c = (n/10)%10;
//     w = n%10;
//     int nv=w*1000 + c*100 +m*10 +a;
//     printf(" la surface d'un rectangle est %d", nv);
//     return 0;
// }
// Challenge 13 : Affichage des valeurs binaire et hexadécimale équivalentes

// int main() {
//     int n;
//     printf("Entrer le nombre en entier : ");
//     scanf("%d", &n);
//     printf("Le nombre en hexadecimal : %x \n", n);

//     return 0;
// }
