int main(){
    int n,s=0,i;
    printf("entrer le nombre des elements:");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("entrer les elements %d :",i+1);
        scanf("%d",&tab[i]);
    }

    for(i=0;i<n;i++){
        s=s+tab[i];
    }printf("la somme est:%d",s);

return 0;
}