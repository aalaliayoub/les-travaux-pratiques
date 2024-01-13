#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct date{
    int jour;
    char mois[30];
    int annee;
}date;
typedef struct empoyer{
    char nom[30],prenom[30];
    date naissance;
    date embouche;
}employe;
int main() {
    employe t[4];
    int i;
    for (i=0;i<1;i++){
        printf("Entrer le nom de employe %d",i+1);
        scanf("%s",t[i].nom);
        printf("Entrer le prenom de employe %d",i+1);
        scanf("%s",t[i].prenom);
        printf("Entrer le jour de naissance de employe %d",i+1);
        scanf("%d",&t[i].naissance.jour);
        printf("Entrer le mois de naissance de employe %d",i+1);
        scanf("%s",t[i].naissance.mois);
        printf("Entrer l'annee de naissance de employe %d",i+1);
        scanf("%d",&t[i].naissance.annee);
        printf("Entrer le jour d'embouche de employe %d",i+1);
        scanf("%d",&t[i].embouche.jour);
        printf("Entrer le mois  d'embouche de employe %d",i+1);
        scanf("%s",t[i].embouche.mois);
        printf("Entrer l'annee d'embouche de employe %d",i+1);
        scanf("%d",&t[i].embouche.annee);
    }
    for(i=0;i<1;i++){
        printf("Nom:%s\nPrenom:%s\ndate naissance : %d %s %d\ndate_embourche|: %d/%s/%d\n",t[i].nom,t[i].prenom,t[i].naissance.jour,t[i].naissance.mois,t[i].naissance.annee,t[i].embouche.jour,t[i].embouche.mois,t[i].embouche.annee);
    }
   
	return 0;
}
