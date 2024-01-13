#include <stdio.h>
typedef struct repertoire{
    char nom[30];
    char prenom[30];
    int telephone;
}rep;
int main()
{
    int m;
    printf("entrer le nombre des repertoire : ");
    scanf("%d",&m);
    rep t[m];
    int i;
    for(i=0;i<m;i++){
        printf("Entrer le nom de repertoire %d : ",i+1);
        scanf("%s",t[i].nom);
        printf("Entrer le prenom de repertoire %d : ",i+1);
        scanf("%s",t[i].prenom);
        printf("Entrer le telephone de repertoire %d : ",i+1);
        scanf("%d",&t[i].telephone);
    }
    printf("les information entrer sont :\n");
    for(i=0;i<m;i++){
        printf("Nom : %s\t\tPrenom : %s\t\ttelephone : 0%d\n",t[i].nom,t[i].prenom,t[i].telephone);
    }
    return 0;
}
