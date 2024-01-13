#include<stdio.h>
int main (){
    int age;
    char sexe;
   printf("\tCe programme determine est ce que une personne paie d'impot ou non :\n");
   printf("entrer votre age : ");
   scanf("%d",&age);
   printf("entrer votre sexe F femme M masculin : ");
   scanf(" %c",&sexe);
   if(age>20&&sexe=='M'||age>20&&sexe=='m'){
       printf("cet homme pait l impot\n");
   }
   else if(sexe=='F'&& age>18 && age<35 ||sexe=='f'&& age>18&&age<35){
       printf("cette femme paie d impot\n");
   }
   else{
       printf("cette personne ne paie pas d impot\n");
   }
    return 0;
}
