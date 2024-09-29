int main(){
    int n,min;
    printf("entrez le nombre des elements:");
    scanf("%d",&n);
    int tab[n];
    for(int i=0;i<n;i++){
        printf("entrer le nombre %d:",i+1);
        scanf("%d",&tab[i]);
    }
    min=tab[0];
    for(int i=0;i<n;i++){
        if(tab[i]<min){
            min = tab[i];
        }
    }printf("le plus petit element dans le tableau est :%d",min);

return 0;
}