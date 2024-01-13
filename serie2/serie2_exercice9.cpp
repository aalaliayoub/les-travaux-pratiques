#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char chaine[20000];
int cas;
void affichage(){
	printf("la chaine entrer est : %s\n",chaine);
}
void lecteur(){
	int cas;
	printf("Entrer un chaine de caractere:");
	scanf("%s",chaine);
	//gets(chaine);
	printf("la chaine entrer est :\n");
	puts(chaine);
}
void inverse_de_chaine(){
	char chaine2[2000];
	int i;
	for (i=0;i<strlen(chaine);i++){
		chaine2[i]=chaine[strlen(chaine)-i-1];
	}
	printf("inerce de %s est la chaine inverse est : %s\n",chaine,chaine2);
}
int nb_mots(){
	int i;
	int nb=1;
	for (i=0;i<strlen(chaine);i++){
	 	if(chaine[i]==' '&& chaine[i+1]!=' '){
	 	    nb++;
	 		
		 }
	}
	return nb;
}
void mainn(){
	printf("\t====================================================================================\n\t====================================================================================\n");
	printf("\t||                                      Menu                                       ||\n");
	printf("\t||                             1.pour saisir une chaine                            ||\n");
	printf("\t||                             2.affiche la chaine                                 ||\n");
	printf("\t||                             3.inverce de la chiane                              ||\n");
	printf("\t||                             4.nombre de mots de la chaine                       ||\n");
	printf("\t||                             0.pour quitter                                      ||\n");
	printf("\t====================================================================================\n\t====================================================================================\n");
	printf(">> ");
	scanf("%d",&cas);
}
int main(){
	int nombre;
	mainn();
	int c;
	while(cas==1 || cas==2 || cas==3 || cas==4){
		if(cas==1){
			lecteur();
		}
		if(cas==2){
			affichage();
		}
		if(cas==3){
			inverse_de_chaine();
		}
		if(cas==4){
			nombre=nb_mots();
			printf("le nombre de mots de cette chaine est : %d\n",nombre);
		}
		printf("press any key........\n");
		getchar();
		while (getchar() != '\n');
		mainn();
	}
	return 0;
}
