#include <stdio.h>
int main(){
    int n,i;
    printf("entrer un nombre :");
    scanf("%d",&n);
    for(i=n+1;i<= n+10;i++){
        printf("%d",i);
         if (i < n+10) {  
            printf("  ");
        }
    }
    return 0;
}
