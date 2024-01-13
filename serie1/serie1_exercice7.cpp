#include<stdio.h>
#include<string.h>
int main(){
    int T[20];
    int i=0,k=0;
    int n;
    int s=0;
    int tt[1000];
    printf("la partie 1 d exercice :\n");
    for(i=0;i<2;i++){
        printf("entrer le nombre %d : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("le carre de nombre paire est :\n");
    for(i=0;i<2;i++){
        if(T[i]%2==0){
            printf("%d\n",T[i]*T[i]);
        }
    }
    i=0;
    printf("la partie 2 de l exercece: \n");
    printf("entrer un nombre : ");
    scanf("%d",&n);
    while(n!=100){
        k++;
        if(n%2==0){
            tt[i]=n;
            i++;
        }
        printf("entrer un nombre : ");
        scanf("%d",&n);
        
    }
    if (n==100){
        printf("le nombre d entre est : %d le nombre des entree paire est : %d \n",k,i);
        printf("le carre des nombres paire est : \n");
        for(k=0;k<i;k++){
            printf("%d\t",tt[k]*tt[k]);
            
        }
        
    }
    
	return 0;
}
