// ch 4 : Affichage des N Premiers Nombres Impairs
#include <stdio.h>
int main(){
    int n,i;
    printf("entrer le nombre n:");
    scanf("%d",&n);
     for (int i = 1; i <=n; i++) {
        printf("%d", 2 * i + 1);  
        if (i < n-1) {  
            printf(",");
        }
    }

    return 0;
}