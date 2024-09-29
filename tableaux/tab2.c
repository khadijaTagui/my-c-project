int main(){
    int i,n;
    printf("entrer le nombre des elements:");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
         printf("entrer les elementes %d:",i+1);
         scanf("%d",&tab[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\n",tab[i]);
    }
return 0;
}