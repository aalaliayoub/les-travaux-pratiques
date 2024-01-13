#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
	char*ch,*q,*ptr;
	int i=0;
	char c;
	int k=0,taille=0;
	ch=(char*)malloc(30);
	printf("Ce programme detecte est ce que le mot est palandrame au non:\n");
	printf("Entrez un mot :");
	scanf("%s",ch);
	while(*(ch+taille)!='\0'){
	    taille++;
	}
	for(ptr=ch,q=ch+taille-1;ptr<ch+taille/2;ptr++,q--){
	    if(*ptr!=*q){
	        printf("non c est pas le cas");
	        exit(0);
	    }
	    else{
	        k++;
	    }
	}
	if(k==taille/2){
	    printf("ce mot est palandrome");
	}
	return 0;
}
