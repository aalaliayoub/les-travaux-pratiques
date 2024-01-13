#include<stdio.h>
#include<string.h>
int main(){
    int i=0,j=0,k=0,n;
    int T[100];
    printf("Suite entier  :\n");
    printf("entrer un nombre :  ");
    scanf("%d",&n);
    int min=n;
    int minpos=n;
    while(n!=999){
        i++;
        j=j+n;
        if(min>n){
            min=n;
        }
        if(n>0){
            k=k+n;
            if(minpos>n){
                minpos=n;
            }
            
        }
        printf("entrer un nombre :  ");
        scanf("%d",&n);
    }
    if(n==999){
        if(i!=0){
            printf("le nombre totale des valeurs de la suite est: %d\nLa somme des valeurs est : %d \nle minimum est : %d \nla somme des valeurs positives est : %d \n le minimum des valeiurs positives est : %d ",i,j,min,k,minpos);
        }
        else{
            printf("la lise est vide ");
        }
        
    }
	return 0;
}
