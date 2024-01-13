#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
int main() {
    int k=0,s=0;
char *ch,*p,*ch1,*q,*ptr;
ch=(char*)malloc(100*sizeof(char));
ch1=(char*)malloc(30*sizeof(char));
printf("Entrer une frase : ");
gets(ch);
printf("Entrer le mot que vous voulez voir nombre de repetition : ");
gets(ch1);
ptr=ch1;
for(p=ch;p<ch+strlen(ch);p++){
    if(*p==*ch1){
        for(q=ch1,ptr=ch+(p-ch);q<ch1+strlen(ch1);q++){
            if(*q!=*ptr){
                break;
            }
            else{
                k++;
            }
            ptr++;
        }
        if(k==strlen(ch1)){
            s++;
            k=0;
        }
    }
}
printf("le nb repitition de %s est %d",ch1,s);
	return 0;
}
