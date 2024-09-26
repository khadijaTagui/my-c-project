#include <stdio.h>

int main() {
    int b, e, r = 1; 
    printf("Entrez la base b : ");
    scanf("%d", &b);
    printf("Entrez l'exposant e : ");
    scanf("%d", &e);

    for (int i = 0; i < e; i++) {
        r *= b;
    }
    printf("%d^%d = %d\n", b, e, r);

    return 0;
    
}
