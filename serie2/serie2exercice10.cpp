#include <stdio.h>
#include<stdlib.h>
#include<string.h>
char chaine[8];
typedef struct langage{
    char chaine[30];
}langage;
int distancet(char*S1,char*S2){
    int i=0,nb=0;
    while(*S1!='\0'){
        if(*S1!=*S2){
            nb++;
        }
        S1++;
        S2++;
    }
    return nb;
}
char*binairee(int n){
    int T[7]={0};
    int i=0;
    while(i!=8){
        T[7-i]=n%2;
        i++;
        n=n/2;
    }
    for (i=0;i<8;i++){
        if(T[i]==1){
            chaine[i]='1';
        }
        else{
            chaine[i]='0';
        }
    }
    return chaine;
}
void distancenambre(char *t,char *tt){
    int i;
    int dist=0;
    for (i=0;i<8;i++){
        if(*(t+i)!=*(tt+i)){
            dist++;
        }
    }
    printf("%d\n",dist);
}
int main()
{
    char *S1;
    char *S2;
    char *t,*tt;
    int ttt[1000];
    langage T[4];
    int a,b,n,i;
    int x,k=0,j;
    S1=(char*)malloc(30);
    S2=(char*)malloc(30);
    printf("\t\tce programme calcule la distance de hammig :\n");
    printf("entrez la chiane 1 : ");
    scanf("%s",S1);
    printf("la chine %s entrez la chiane 2 : ",S1);
    scanf(" %s",S2);
    a=strlen(S1);
    b=strlen(S2);
    while(a!=b){
        printf("entrer de chaine de meme taillle \n");
        printf("entrez la chiane 1 : ");
        scanf("%s",S1);
        printf("entrez la chiane 2 : ");
        scanf("%s",S2);
        a=strlen(S1);
        b=strlen(S2);
    }
    x=distancet(S1,S2);
    printf("la distance de hamming entre %s est %s est : %d\n",S1,S2,x);
    printf("maintenent en va calculer la distance de hamming d une langage : \n");
    printf("entrer le nombre de mots : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("entrer la chaine %d :",i+1);
        scanf("%s",T[i].chaine);
    }
    for(j=0;j<n-1;j++){
        for(i=j+1;i<n;i++){
            x=distancet(T[i].chaine,T[j].chaine);
            ttt[k]=x;
            k++;
        }
    }
    int min=ttt[0];
    for(i=1;i<k;i++){
        if (min>ttt[i]){
            min=ttt[i];
        }
    }
    printf("la distance de hamming de langage est : %d\n",min);
    printf("dans ce cas entre deux nombre positif inf a 256 : \n");
    printf("entrer le nombre 1: ");
    scanf("%d",&x);
    t=binairee(x);
    printf("%s\n",t);
    printf("entrer le nombre 2: ");
    scanf("%d",&x);
    tt=binairee(x);
    distancenambre(t,tt);
    return 0;
}
