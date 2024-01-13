#include<stdio.h>
#include<string.h>
int determination10(char nom[]){
	if(strlen(nom)>=10){
		return 1;
	}
	else{
		return -1;
	}
}
void lecteur(){
	int cas;
	char nom[20];
	printf(" ce programme travail avec les noms ne comporte pas de blancs:\n");
	printf("entrez un nom de taille inferieur a 20:");
	scanf("%s",nom);
	while(strcmp(nom,"fin")!=0){
	    if(strlen(nom)>20){
	        printf("Erreur : entrer un nom de taille inferieur a 20:");
	        scanf("%s",nom);
	    }
	    else{
	        cas=determination10(nom);
		if(cas==1){
			printf("le nom : %s comporte plus de 10 caractere .\n",nom);
		}
		else{
			printf("le nom : %s comporte moin de 10 caractere .\n",nom);
		}
		printf("entrez un nom de taille inferieur a 20:");
	    scanf("%s",nom);
	        
	    }
	}
}
int main(){
lecteur();
	return 0;
}
