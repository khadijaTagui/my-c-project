// ch 3 : Somme des N Nombres

#include <stdio.h>

int main() {
    int n, s = 0, i;
    printf("Entrez un nombre entier n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        s += i;  
        printf("%d", i); 
        if (i < n) {  
            printf(" + ");
        }
    }

    printf(" = %d\n", s);
    return 0;
}
