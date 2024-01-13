#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
void supression_blancs(char *ch1){
    char*ch2;
    char*p;
    int i=0;
    ch2=(char*)malloc(30*sizeof(char));
    for(p=ch1;p<ch1+strlen(ch1);p++){
        if(*p==' '){
            if(*(p+1)!=' '){
                *(ch2+i)=*p;
                i++;
            }
        }
        else{
            *(ch2+i)=*p;
            i++;
        }
    }
    printf("Entrer une frase : %s",ch2);
}
int main() {
    int k=0,s=0;
char*ch1,*q,*ptr;
ch1=(char*)malloc(30*sizeof(char));
printf("Entrer une frase : ");
gets(ch1);
supression_blancs(ch1);
	return 0;
}
