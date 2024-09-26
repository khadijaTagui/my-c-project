// ch 6 : Affichage des N Premiers Nombres Pair
#include <stdio.h>
int main(){
    int n,i;
    printf("entrer le nombre n:");
    scanf("%d",&n);
     for (int i = 1; i <=n; i++) {
        printf("%d", 2 * i );  
        if (i < n) {  
            printf(",");
        }
    }

    return 0;
}