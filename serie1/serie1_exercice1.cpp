#include<stdio.h>
int main (){
    int a,b;
    char c;
    printf("Ce programme comme  une calculatrice : \n");
    printf("entrer un nombre : ");
    scanf("%d",&a);
    printf("entrer un operateur +,-,*,/ : ");
    scanf(" %c",&c);
    printf("entrer un nombre : ");
    scanf("%d",&b);
    switch(c){
        case '+':printf("%d + %d = %d ",a,b,a+b); break;
        case '-':printf("%d - %d = %d ",a,b,a-b); break;
        case '/':printf("%d / %d = %d ",a,b,a/b); break;
        case '*':printf("%d * %d = %d ",a,b,a*b); break;
    }
    return 0;
}
