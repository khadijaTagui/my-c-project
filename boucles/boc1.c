// ch 1 : Table de Multiplication

#include <stdio.h>
#include <math.h>
int main(){
     int n,i,m;
     printf("entrer le nombre:");
     scanf("%d",&n);

     for (i==1;i<=10;i++){
        m = i * n;
        printf("%d * %d = %d \n",n,i,m);
     }
    return 0;
}