#include<stdio.h>
int main (){
    float prix;
   printf("\t\tMagasin : \n");
   printf("Entrer le prix initial : ");
   scanf("%f",&prix);
   if(prix<100){
       printf("Prix initial : %.2f DH , Remise : %.2f DH Prix final: %.2f DH\n",prix,prix*0.3,prix-prix*0.3);
   }
   else if(prix>=100 && prix<=200){
       printf("Prix initial : %.2f DH , Remise : %.2f DH Prix final: %.2f DH\n",prix,prix*0.4,prix-prix*0.4);
   }
   else{
       printf("Prix initial : %.2f DH , Remise : %.2f DH Prix final: %.2f DH\n",prix,prix*0.5,prix-prix*0.5);
   }
    return 0;
}
