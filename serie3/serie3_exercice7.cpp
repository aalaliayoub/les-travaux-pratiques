#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
int recherche(float t[],int m , float val){
    int i,j=0;
    for(i=0;i<m;i++){
        if(t[i]==val){
            j=1;
            return i;
        }
    }
    if(j==0){
        return -1;
    }
}
int main() {
    int n,resultat,i;
    float valeur;
    printf("entrer la taille de tableau : ");
    scanf("%d",&n);
    float t[n];
    for(i=0;i<n;i++){
        printf(" entrer  t[%d] : ",i+1);
        scanf("%f",&t[i]);
    }
    printf("entrer une valeur a rechere : ");
    scanf("%f",&valeur);
    resultat=recherche(t,n,valeur);
    if(resultat==-1){
        printf("la valeur n'exsite pas ");
    }
    else{
        printf("la position de %.2f dans le tableau est %d ",valeur,resultat+1);
    }
	return 0;
}
