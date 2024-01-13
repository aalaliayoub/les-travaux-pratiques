#include <stdio.h>
#include<string.h>
char * cryptage(char q[]){
    int n,i=0;
    printf("entrer le code de cryptage : ");
    scanf("%d",&n);
    printf("le message initiale est : %s\n",q);
    while(q[i]!='\0'){
        if(q[i]==' '){
            q[i]=q[i];
        }
        else{
            q[i]=q[i]+n;
        }
        
        i++;
    }
    
    return q;
}
int main(){
    char message[10000];
    char*p;
    printf("programe de cryptage : \n");
    printf("entrer un message : ");
    gets(message);
    while(strcmp(message,"fin")!=0){
        p=cryptage(message);
        printf("le message apres le cryptage est : %s\n",p);
        printf("entrer un autre message ou fin pour s arreter  : ");
        scanf("%s",&message);
    }
    return 0;
}
