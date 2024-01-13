#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
void calcule_taille(char q[]){
    int i=0;
    int chifr=0,nbspasse=0;
    while(q[i]!='\0'){
        if(isdigit(q[i])){
            chifr++;
        }
        else if(q[i]==' '){
            nbspasse++;
        }
        else{
            i++;
        }
    }
    printf("Chiffres: %d\t\tAutres: %d\nEspassemnets : %d\n",chifr,i,nbspasse);
}
int main()
{
    char p[1000000];
    printf("entrez une chaine de caractere : ");
    gets(p);
    puts(p);
    calcule_taille(p);
    return 0;
}
