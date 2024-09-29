int main(){
    int n,max;
    printf("entrer le nombre des elements:");
    scanf("%d",&n);
    int tab[n];
    for(int i=0;i<n;i++){
        printf("entrer le nombre %d:",i+1);
        scanf("%d",&tab[i]);
    }
    max = tab[0];
    for(int i=0;i<n;i++){
        if(tab[i]>max){
            max=tab[i];
        }
        }
    printf("le plus grand element dans le tableau est:%d\n",max);
return 0;
}