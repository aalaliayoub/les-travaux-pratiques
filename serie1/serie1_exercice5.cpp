#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("ce programme determine est ce que un nombre est premier ou non :\n);
    printf("entrer un nombre : ");
    scanf("%d",&n);
    int i,k=0;
    for (i=2;i<=n/2;i++){
        if(n%i==0){
            k=1;
            printf(" %d n'est pas un nombre premier.",n);
            break;
        }
        
    }
    if(k==0){
        printf(" %d est  un nombre premier.",n);
    }
	return 0;
}
