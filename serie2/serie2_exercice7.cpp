#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
int somme(int a,int b){
    return a+b;
}
int soustraction(int a,int b){
    return a-b;
}
int multiplication(int a,int b){
    return a*b;
}
int modolu(int a,int b){
    int x;
    if(b!=0){
        x=a % b;
        return x;
    }
    else
    printf("la division par 0 est impossible");
    exit(0);
}
int division(int a,int b){
    
    if(b!=0){
        return a/b;
    }
    else
    printf("la division par 0 est impossible");
    exit(0);
}
int main()
{
    char c;
    int a,b;
    printf("\t\tCe programe est une calculatrice : A + - * % / B = C \n");
    printf("ENTRER A : ");
    scanf("%d",&a);
    printf("ENTRER L UN DES OPERATEUR + - * % / : ");
    scanf(" %c",&c);
    printf("ENTRER B : ");
    scanf("%d",&b);
    while(c=='+' || c=='-' || c=='*' || c=='/' || c=='%'){
        switch(c){
            case '+':a=somme(a,b) ; printf("la somme est : %d\n",a); break;
            case '-':a=soustraction(a,b) ; printf("la soustraction est : %d\n",a); break;
            case '*':a=multiplication(a,b) ; printf("la multiplication est : %d\n",a); break;
            case '/':a=division(a,b) ; printf("la division est : %d\n",a); break;
            case '%':a=modolu(a,b) ; printf("la modolu est : %d\n",a); break;
        }
        printf("Pour recommencer entrer N si nom entrer R : ");
        scanf(" %c",&c);
        if(c=='N'){
        printf("ENTRER A : ");
        scanf("%d",&a);
        printf("ENTRER L UN DES OPERATEUR + - * % / : ");
        scanf(" %c",&c);
        printf("ENTRER B : ");
        scanf("%d",&b);
        }
        else{
            printf("si la fin boucourage.\n");
        }
    }
    return 0;
}
