#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Ce programme affiche tout les nombre paire infrieur d un nombre paire donne : \n");
    printf("entrer un nombre : ");
    scanf("%d",&n);
    int i,k=0;
    if(n%2==0){
        for(i=2;i<n;i++){
            if(i%2==0){
               printf(" %d\t",i);
            }
        }
        
    }
	return 0;
}
