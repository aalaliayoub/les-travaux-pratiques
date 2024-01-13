#include<stdio.h>
int main (){
    int nb;
   printf("\t\tBIBLIOTIQUE : \n");
   printf("Entrer nombre de photocopie : ");
   scanf("%d",&nb);
   if(nb<=10){
       printf("le montant totale est : %d DH\n",nb*1);
   }
   else if(nb>10&&nb<=20){
       printf("le montant totale est %.2f DH\n",10+(nb-10)*0.6);
   }
   else{
       printf("le montant totale est %.2f DH\n",10+10*0.6+(nb-20)*0.4);
   }
    return 0;
}
