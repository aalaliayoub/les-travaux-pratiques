#include <stdio.h>
#include<stdlib.h>
void calcule_taille(char q[]){
    int i=0;
    while(q[i]!='\0'){
        i++;
    }
    printf("la taille est %d\n",i);
}

int main()
{
    char p[1000000];
    printf("entrez une chaine de caractere : ");
    gets(p);
    calcule_taille(p);
    return 0;
}
