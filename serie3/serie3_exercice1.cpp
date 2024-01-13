#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
	char*ch,*q,*ptr;
	int i=0;
	char c;
	ch=(char*)malloc(30);
	printf("Ce programme inverce les noms:\n");
	printf("Entrez un nom :");
	scanf("%s",ch);
	for(ptr=ch,q=ch+strlen(ch)-1;ptr<ch+strlen(ch)/2;ptr++,q--){
	    c=*ptr;
	    *ptr=*q;
	    *q=c;
	}
	printf("%s",ch);
	return 0;
}
