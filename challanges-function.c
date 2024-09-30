#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
//challange 1
int sum(a,b);

int main(){
    int a,b;
    printf("entrer le valeur de a:");
    scanf("%d",&a);
    printf("entrer la valeur de b:");
    scanf("%d",&b);
    printf("la somme de %d et %d est : %d",a,b,sum(a,b));
return 0 ;
}
int sum(int a, int b){
    int sum;
    sum=a+b;
    return sum;

}

//challange 2
int mutltiplication(a,b);

int main(){
    int a,b;
    printf("entrer le valeur de a:");
    scanf("%d",&a);
    printf("entrer la valeur de b:");
    scanf("%d",&b);
    printf("la multiplication de %d et %d est : %d",a,b,mutltiplication(a,b));
return 0 ;
}
int mutltiplication(int a, int b){
    int mutltiplication;
    mutltiplication=a*b;
    return mutltiplication;

}

//challange 3
int max(a,b);

int main(){
    int a,b;
    printf("entrer le valeur de a:");
    scanf("%d",&a);
    printf("entrer la valeur de b:");
    scanf("%d",&b);
    printf("la valeur max de %d et %d est : %d",a,b,max(a,b));
return 0 ;
}
int max(int a, int b){
    if(a-b>0)
        return b;
    else
    return a;
}
//challange 4

int min(a,b);

int main(){
    int a,b;
    printf("entrer le valeur de a:");
    scanf("%d",&a);
    printf("entrer la valeur de b:");
    scanf("%d",&b);
    printf("la valeur min de %d et %d est : %d",a,b,min(a,b));
return 0 ;
}
int min(int a, int b){
    if(a-b>0)
        return b;
    else
    return a;
}
//challange factorielle 5

int factorielle(int n);

int main(){
    int n;
    printf("entrer la valeur  :");
    scanf("%d",&n);
    printf("la factorielle est %d",factorielle(n));

return 0;
}
int factorielle(int n){
    int f;
    f=1;
    for(int i=1;i<=n;i++){
        f*=i;

    }return f;
}
//challange fibonacci 6

int fibonacci(int n);

int main()
{
    int n;
    printf("entrer la valeur de n:");
    scanf("%d",&n);
    printf("le fibonacci est %d",fibonacci(n));

    return 0;
}


int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    int f0=0,f1=1,f;
    for(int i=2;i<=n;i++){
    f=f1+f0;
    f0=f1;
    f1=f;}
    return f;


}
//challange 7
void inverse(char chaine[]);
int main(){
    char chaine[50];
    printf("entrer la chaine de caractere:");
    scanf("%s",chaine);
    inverse(chaine);
    printf("la chaine inversee est :%s\n",chaine);
return 0;
}
void inverse(char chaine[]){

    int size = strlen(chaine);
    int end = size -1;
    int i=0;
    char f;
    while(i<end){

        f=chaine[i];
        chaine[i]=chaine[end];
        chaine[end]=f;
        end--;
        i++;


    }



}


int parite(int n);
int main(){
    int n;
    printf("entrer la valeur de n:");
    scanf("%d",&n);
    printf("la parite de la valeur est :%d",parite( n));
return 0;
}
int parite(int n){
    if(n%2==0){
        return 1;
    }else{
        return 0;
    }

}

*/







