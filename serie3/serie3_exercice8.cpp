#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
int main() {
    int n,resultat,i;
    float valeur;
    int s=1;
    printf("entrer la taille de tableau : ");
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++){
        printf(" entrer  t[%d] : ",i+1);
        scanf("%d",&t[i]);
    }
     for(i=0;i<n;i++){
        if(t[i]==t[i+1]){
            s++;
        }
        else{
            printf("%d%d",s,t[i]);
            s=1;
        }
    }
	return 0;
}
