// Challenge 2 : Factorielle d'un Nombre

#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, f = 1;
    printf("entrer le nombre n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f = f * i;
        printf("Factorielle de %d = %d\n", n, f);
    }
    return 0;
}